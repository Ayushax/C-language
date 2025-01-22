#include <stdio.h>
#include <string.h>
struct bankacc{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance;
};


int main(){ struct bankacc acc1;
acc1.accNo =342342;
strcpy(acc1.name,"Ayush singh");
strcpy(acc1.ifsc,"ANAONW302");
acc1.balance = 23.22;

printf("accNO is %d\n name is %s\n ifsc code is %s\n Balance is %.2f\n ",acc1.accNo,acc1.name,acc1.ifsc,acc1.balance);

    
     return 0;
}