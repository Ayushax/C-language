#include <stdio.h>

int main(){
    int i = 6;
    printf("The vakue if i is %d\n",i);
    i = i +5; //10
    printf("The value of i is %d\n",--i);
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",i++);// 11+1=12
    printf("The value of i is %d\n",++i);
    
     // ++i =i++ same
     //i++ prints i first and then increments i(Post increment Operator)
    //  ++i imcrements i first and then prints i (Post increment Operator)
    i = 2;    
      i+=5;
    printf("%d",i);
     return 0;
}