#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Ayush.txt", "a");
    // if we 
    int num = 33333;
    fprintf(fptr,"%d",num);
    fclose(fptr);
// If we use w in case of a(append) then File ke data ko erase kar ke new data/input kiya hua dal dege.
    return 0;
}