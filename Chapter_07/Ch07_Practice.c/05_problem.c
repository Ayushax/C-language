#include <stdio.h>

int count(int a[], int n){
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
       if (a[i]>0)
       {
        no_of_positive++;
       }
       
    }
    return no_of_positive;
    
}

int main(){
    int a[] = {1,2,3,4,-5,6,-7,8,-9,10,11};

    printf("The no of positive interger is  %d ", count(a,11));
     return 0;
} 