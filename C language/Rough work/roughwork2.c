//WACP to find average of three no. using function.

#include<stdio.h>

float avg(float a, float b, float c){
    return(a+b+c)/3;
}
int main()
{
    float x,y,z,average;
    printf("Enter the three numbers: ");
    scanf("%f %f %f",&x,&y,&z);
    average= avg(x,y,z);

    printf("Average of three numbers is %.2f\n",average);

    return 0;
}