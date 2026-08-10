#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int size;
    int tag;
    char *buffer;
} my_struct_t;

#define MEMORY_SIZE 42
#define BLOCK_SIZE 24
#define ERR_TOO_BIG -1
#define ERR_WRONG_TAG -2
#define ERR_NULL_BUF -3

void print_write_result(int result)
{
  switch (result) {
    case 0:
        printf("Write succeeded. \n");
        break;
    case ERR_TOO_BIG:
      printf("Write failed: message too large for this block.\n");
      break;
    case ERR_WRONG_TAG:
      printf("Write failed: there was a permission tag mismatch.\n");
      break;
    case ERR_NULL_BUF:
      printf("Write failed: buffer was NULL.\n");
      break;
    default:
      printf("Write failed: unknown error (%d).\n", result);
      break;
  }
}



int safe_write(my_struct_t *block, char *buffer, int size, int permission_tag) {
    if (block->size < size) {
        return ERR_TOO_BIG;
    }
    if (block->tag != permission_tag) {
        return ERR_WRONG_TAG;
    }
    if (buffer == NULL) {
        return ERR_NULL_BUF;
    }
    // memcpy(destination, source, size)
    memcpy(block->buffer, buffer, size); // do the copy...
    return 0; // then report success separate
}

int main(int argc, char **argv)
{
    my_struct_t my_memory[MEMORY_SIZE];

    for (int i = 0; i < MEMORY_SIZE; i++) {
        // init values to 0
        memset(&my_memory[i], '\0', sizeof(my_struct_t));

        my_memory[i].size = BLOCK_SIZE;
        my_memory[i].buffer = malloc(BLOCK_SIZE);
        my_memory[i].tag = 0x42;

        if (my_memory[i].buffer == NULL) {
            fprintf(stderr, "malloc failed at block %d\n", i);
            return 1; // break out, rest of pool cannot be trusted
        }
    }

    char *message = "Hello!"; // 6 chars and no null terminator needed since we control size

    int result = safe_write(&my_memory[0], message, strlen(message), 0x42);
    print_write_result(result);

    // now for two ways to make it fail:
    
    int result2 = safe_write(&my_memory[1], message, strlen(message), 0x99);
    print_write_result(result2); // should be wrong tag


    char *big_message = "This string is definitely much longer than twenty four characters";
    int result3 = safe_write(&my_memory[2], big_message, strlen(big_message), 0x42);
    print_write_result(result3); // too big, won't fit in the 24-byte block even with correct tag


    for (int i = 0; i < MEMORY_SIZE; i++) {
        free(my_memory[i].buffer); // freeing every malloc
    }

    return 0;
}

