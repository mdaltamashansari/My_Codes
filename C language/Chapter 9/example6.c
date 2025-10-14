//Q.8 Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>
#include<string.h>

typedef struct customer{
    long long int account_no;
    char ifscCode[30];
    char name[30];
    char address[25];
    long long int mobile_no;
}alt;

void showCustomer(alt e){
    printf("account_no. :%lld\n",e.account_no);
    printf("ifscCode: %s\n",e.ifscCode);
    printf("name: %s\n",e.name);
    printf("address: %s\n",e.address);
    printf("mobile_no.: %lld\n",e.mobile_no);
}
int main()
{
    alt alto = {250034562879, "abc0146528", "altamash", "pather ki masjid", 9386551291};
    showCustomer(alto);

    return 0;
}