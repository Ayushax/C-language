#include <stdio.h>

int main(){
    int marks [5];
    printf("Enter marks of 5 students\n");
   
       for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %u\n",i, &marks[i]);
    }
    // continous 4 in row of %u
    

     return 0;
}