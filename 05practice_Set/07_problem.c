#include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
     {
    //     This loop runs from n to 2
    //     if  i  = 0  ---> print  1 star
    //     if  i  = 1  ---> print  3 star
    //     if  i  = 2  ---> print  5 star
    //     no_of_stars =  (2*i +1)
    // This for loop prints(2*i +1 ) stars
    for (int j = 0; j < 2*i+1; j++)
    {
        printf("* ");

    }
    // This printf(print a new line)
    printf("\n");
    }
    
     return 0;
}