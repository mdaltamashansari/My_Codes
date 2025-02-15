#include <stdio.h>
int main()
{
    //pointer arthmetic of integer
    // int i=5;
    // int *j=&i;
    // printf("The address of i is %u\n",&i);
    // printf("The value inside j before updation is %d\n ,j");
    // j++;
    // printf("The value inside j after updaton is %d\n",j);

     /**********************************************/

     //pointer arithmetic of float
    // float i=5;
    // float *j= &i;
    // printf("The address of i is %u\n",&i);
    // printf("The value inside j before updation is %d\n ,j");
    // j++;
    // printf("The value inside j after updation is %d\n ,j");

    /**********************************************/

    //pointer arithmetic of character
    // char i='f';
    // char *j= &i;
    // printf("The address of i is %u\n",&i);
    // printf("The value inside j before updation is %d\n",j);
    // j++;
    // printf("The value inside j after updation is %d\n",j);

    /**********************************************/

    //Addition of a number to a pointer
    // int i=4;
    // int *j= &i;
    // printf("The address of i is %u\n",&i);
    // printf("The value inside j before updation is %d\n",j);
    // j+=5;
    // printf("The value inside j after updation is %d\n",j);

    /**********************************************/

    //subtraction of a number to a pointer 
    // int i=4;
    // int *j= &i;
    // printf("The address of i is %u\n",&i);
    // printf("The value inside j before updation is %d\n",j);
    // j-=5;
    // printf("The value inside j after updation is %d\n",j);

    /**********************************************/

    //subtraction of one pointer to another
    int a=4, i=5;
    int *b=&a,*j=&i;
    printf("The address of a is %u\n",&a);
    printf("The address of pointer b is %u\n",&b);
    printf("The address of i is %u\n",&i);
    printf("The address of pointer j is %u\n",&j);
    printf("The difference b/w both pointers are %d\n",b-j);

    //comparing one pointer to another;
    if(b>j){
        printf("%d is greater than %d\n",b,j);
    }
    else{
        printf("%d is greater than %d\n",j,b);
    }
    
    return 0;
}