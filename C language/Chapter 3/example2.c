#include<stdio.h>

int main(){
    float sub1, sub2, sub3;
    printf("Enter the sub1 marks: ");
    scanf("%f", &sub1);
    printf("Enter the sub2 marks: ");
    scanf("%f", &sub2);
    printf("Enter the sub3 marks: ");
    scanf("%f", &sub3);
    float perc = (sub1+sub2+sub3)/300*100;
    if (sub1>=33 && sub2>=33 && sub3>= 33 && perc>= 40){
       printf("The student has passed");
    }
    else{
        printf("The student has failed");
        }
        return 0;
}