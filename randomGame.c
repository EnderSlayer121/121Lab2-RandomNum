#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
  char userName[20];
  int userNumber;
  int turns = 0;
  int keepGoing = true;
  // variables

  printf("Hello, what is your name? \n");
  scanf("%s", userName);
  printf("Pleasure to meet you, %s. Let's play a game together. \n", userName);
  // User's name
  
  srand(time(NULL));
  int chosenNumber = (rand() % 100) + 1;
  /* printf("%d \n", chosenNumber); */
  // random number generator
  
  while (keepGoing){
    turns++;
    printf("Turn %d) Please enter a number between 1 and 100: ", turns);
    scanf("%d", &userNumber);

    if (userNumber < chosenNumber){
      printf("Guess too low, please try again... \n");
    }
    else if (userNumber > chosenNumber){
      printf("Guess too high, please try again... \n");
    }
    else {
      printf("Correct, the number was %d!", userNumber);
      keepGoing = false;
    } // end if else
  } // end while
  
  return(0);
} // end main
