/* A small project: race simulator. Makes use of structs, pointers, loops, functions. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};
struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};

// Print functions section
void printIntro(){
  printf("Welcome to our main event, digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown() {
  printf("Racers ready! In...\n");
  for (int i = 5; i > 0; i--) {
    printf("%d\n", i);
  }
  printf("Race!\n\n");
}

void printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %d\nFirst Place is: %s in the %s race car!\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
  printf("\nLet's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section
int calculateTimeToCompleteLap() {
  // random number between 1 and 3
  int speed = rand() % (3 + 1 - 1) + 1;
  int acceleration = rand() % (3 + 1 - 1) + 1;
  int nerves = rand() % (3 + 1 - 1) + 1;
  return speed+acceleration+nerves;
}

void updateRaceCar(struct RaceCar* raceCar) {
  // find the time it takes `raceCar` to complete a lap and then add it to `totalLapTime`
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  /* if raceCar1's lap time is less than or equal to raceCar2, then it is in first place, otherwise raceCar2 is first place. update member variables `driverName` and `raceCarColor`.*/
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime){
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  }
  else {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  struct Race race = {5, 1, "", ""};
  for (int i = race.numberOfLaps; i > 0; i--){
    // update both cars
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    // determines who is in first place
    updateFirstPlace(&race, raceCar1, raceCar2);
    // then prints the result for the lap
    printFirstPlaceAfterLap(race);
    // increment the lap
    race.currentLap++;    
  }
  printCongratulation(race);
}

int main() {
	srand(time(0));

  struct RaceCar rc1 = {"Max", "orange"};
  struct RaceCar rc2 = {"Lewis", "blue"};

  printIntro();
  printCountDown();
  startRace(&rc1, &rc2);

};