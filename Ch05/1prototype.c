#include <stdio.h>
    //  Function  protype 
    int sum(int, int);


    // Funtion definition
    int sum(int x , int y)
    {
        printf("The sum is %d\n",x + y);
        return x + y;
    } 
    int main(){
        int a = 1;
        int b = 2;
        sum(a,b);
        //int c = a + b
        // printf("The sum is %d\n, c);
        int a1 = 3;
        int b1 = 4;
        sum(a1,b1);
        int a2 = 30;
        int b2 = 32;
         int c = sum(a2,b2);
     printf("%d\n",c);   // Function call      
return 0;
    }
 
