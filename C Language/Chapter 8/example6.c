//Create your profile which should take user input like name, age, Gender, Highest Qualification and print them on screen in a formatted manner.

#include <stdio.h>
int main()
{
    char name[15];
    int age;
    char gender;
    char qual[30];
    printf("Enter the name: ");
    gets(name);
    fflush(stdin);
    printf("Enter the age: ");
    scanf("%d", &age);
    fflush(stdin);
    printf("Enter the gender(m/f): ");
    scanf("%c", &gender);
    fflush(stdin);
    printf("Enter the Higher Qualification: ");
    gets(qual);
    fflush(stdin);

    printf("Name : %s\nAge: %d\nGender: %c\nHighestQualificationAl: %s\n",name,age,gender,qual);
    return 0;
}