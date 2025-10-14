#include<stdio.h>
//C program to input angles of a triangle and check whether triangle is vaid or not
int main(){
    int a1, a2, a3;
    printf("Enter the 1st angle: ");
    scanf("%d", &a1);
    printf("Enter the 2nd angle: ");
    scanf("%d", &a2);
    printf("Enter the 3rd angle: ");
    scanf("%d", &a3);
    if(a1+a2+a3==180){
        printf("This a valid triangle\n");
    }
    else{
        printf("This is invalid triangle\n");
    }
    return 0;
}