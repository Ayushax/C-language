#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int player; // No random value assigned         here, will be set by user input
    int computer = rand() % 3; // Computer's            choice is random from 0 to 2
     //((rand()%2) + 1)
    // 0 --> Snake
    // 1 --> Water 
    // 2 --> Gun 
    
    printf("Choose 0 for Snake , 1 for water and 2 for Gun\n");
    scanf("%d",&player);
    printf("Computer choose %d\n",computer);
    if (player==computer)
    {
        printf("It's a DRAW\n");
    }
    else if (player==0 && computer==1)
    {
        printf("You WIN!\n");    
    }
    else if (player==0 && computer==2)
    {
       printf("You LOSE!\n");
   }
    else if (player==1 && computer==0)
    {
        printf("You LOSE!\n");
    }
    else if (player==1 && computer==2)
    {
      printf("You WIN!\n");
    }
    else if (player==2 && computer==1)
    {
        printf("You LOSE!\n");
    }
    else if (player==2 && computer==0)
    {
        printf("You WIN!\n");
    }
    
    

     return 0;
}