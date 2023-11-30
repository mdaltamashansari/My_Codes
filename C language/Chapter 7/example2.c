//WAP to accept marks of five students in an array and print them to the screen.
#include <stdio.h>
int main()
{
    int marks[5];
printf("Enter 1st student marks: ");
scanf("%d", &marks[0]);
printf("Enter 2nd student marks: ");
scanf("%d", &marks[1]);
printf("Enter 3rd student marks: ");
scanf("%d", &marks[2]);
printf("Enter 4th student marks: ");
scanf("%d", &marks[3]);
printf("Enter 5th student marks: ");
scanf("%d", &marks[4]);

printf("The marks of 1st student is %d\n",marks[0]);
printf("The marks of 2nd student is %d\n",marks[1]);
printf("The marks of 3rd student is %d\n",marks[2]);
printf("The marks of 4th student is %d\n",marks[3]);
printf("The marks of 5th student is %d\n",marks[4]);

    return 0;
}
