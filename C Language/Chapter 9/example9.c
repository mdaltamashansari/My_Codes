//Q.5 WAP with a structure representing a complex number.
//Q.6 Create an array of 5complex numbers created in problem 5 and display them with the help of a display function.The values must be taken as an input from the user.
//Q.7 Write problem 5 & structure using typedf keyword.

#include <stdio.h>

typedef struct complex{
    int real;
    int imaginary;
}comp;

void showcomplexNo(comp cn){
    printf("Real part: %d\n",cn.real);
    printf("Imaginary part: %d\n\n",cn.imaginary);
}

int main()
{
    comp cnum[5];
    for(int i=0; i<5; i++){
        printf("Entering data for %d complex no: \n",i+1);
    printf("Enter real value: ");
    scanf("%d",&cnum[i].real);
    printf("Enter imaginary value: ");
    scanf("%d",&cnum[i].imaginary);
    }
    for(int i=0; i<5; i++){
        printf("Printing data for %d complex no: \n",i+1);
        showcomplexNo(cnum[i]);
    }
    return 0;
}