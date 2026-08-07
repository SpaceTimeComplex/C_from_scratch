// see inside main, soon enough it becomes unmaintanable with that approach
// could use arrays, but that is for data of same type...
// ENTER almighty classes- er, I mean, structures...

#include <stdio.h>

// 1. defining a Table struct
struct Table {
  int length;
  int width;
  int height;
  char color[20];
};

int main(void) {
  int table1Length = 24;
  int table1Width = 24;
  int table1Height = 20;
  char table1Color[20] = "Dark Brown";

  int table2Length = 42;
  int table2Width = 18;
  int table2Height = 32;
  char table2Color[20] = "Matte Black";

  // 2. initializing data using defined structure from above. Like Gordon Ramsay says: "beautiful. well done."
  struct Table table1 = {24, 24, 20, "Dark Brown"};
  struct Table table2 = {42, 18, 32, "Matte Black"};
  
}