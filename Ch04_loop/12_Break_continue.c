#include <stdio.h>

int main(){
    for (  int i = 0; i < 16; i++)
    {   if(i==6){
        break;//exit the loop now!
    }
     printf("i is %d\n",i);
    }
    printf("FOr loop is done!\n");
     for (int x = 0; x <16; x++)
     {   if(x==6){
        continue;//skip this iteration now
     }
       printf("x is %d\n",x);
     }
     printf("FOr loop is done!\n");
     
    
     return 0;
}