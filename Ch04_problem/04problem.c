#include <stdio.h>

int main(){
    // Using DO While LOOP:
    // int i =1;
    // int sum = 0;
    // do
    // {
    //    sum+=i;
    //    i++;
    // } while (i<=10);
    // USING FOR LOOP:
    int sum = 0;
    for (int i = 1; i <=9; i++)
    {
        sum+=i;
    }
    
    
    printf ("The sum of first 9 natural number is %d",sum);
     return 0;
}