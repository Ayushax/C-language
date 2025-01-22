#include <stdio.h>
void Good_morning();
void Good_afternoon();
void Good_evening();
void Good_morning(){
    printf("good morning \n");
}
void Good_afternoon(){
    printf("good afternoon\n");
}
void Good_evening(){
    printf("good evening\n");
}

int main(){
    Good_morning();
    Good_afternoon();
    Good_evening();
    
     return 0;
}