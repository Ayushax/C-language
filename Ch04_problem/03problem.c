#include <stdio.h>

int main(){
    int i =1;
    int sum = 0;
    while(i<=10){
        sum+=i; //sum = sum + i
        i++;
    }
    printf ("The sum of first 10 natural number is %d",sum);
     return 0;
}