#include<stdio.h>
//C program to input marks of five subjects and calculate percentage and grade
int main(){
    int physics, chemistry, biology, mathematics,computer;
    printf("Enter the marks of physics: ");
    scanf("%d", &physics);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the marks of biology: ");
    scanf("%d", &biology);
    printf("Enter the marks of mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter the marks of computer: ");
    scanf("%d", &computer);
    int perc = (physics+chemistry+biology+mathematics+computer)/5;
    if(perc>=90){
        printf("students get Grade A\n");
    }
    else if(perc>=80){
        printf("students get Grade B\n");
    }
    else if(perc>=70){
        printf("students get Grade C\n");
    }
    else if(perc>=60){
        printf("students get Grade D\n");
    }
    else if(perc>=40){
        printf("students get Grade E\n");
    }
    else if(perc<40){
        printf("students get Grade F\n");
    }
    return 0;
}