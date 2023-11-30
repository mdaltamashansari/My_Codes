//Create your profile which should take user input like name, age, Gender, Highest Qualification and print them on screen in a formatted manner.

#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char gender;
    char HighestQualification[20];
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your Gender: ");
    scanf("%s",&gender);
    printf("Enter your Highest Qualification: : ");
    gets(HighestQualification);

    printf("The name you input was \n%s\n",name);
    printf("The age you input was \n%d\n",age);
    printf("The gender you input was \n%s\n",gender);
    printf("The highest qualification you input was \n%s\n",HighestQualification);
    
    return 0;
}