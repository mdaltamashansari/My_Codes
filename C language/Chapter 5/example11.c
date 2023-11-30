//WACP to find diameter, circumference and area of circle using functions. 

#include<stdio.h>

float diam(float r)
{
    return r+r;
}
float circum(float r)
{
    return 2*3.14*r;
}
float are(float r)
{
    return 3.14*r*r;
}

int main()
{
    float m, diameter,circumference,area;
    printf("Enter the value of radius: ");
    scanf("%f", &m);
    diameter = diam(m);
    circumference = circum(m);
    area = are(m);
    printf("The diameter is %0.2f\n",diameter);
    printf("The circumference is %0.2f\n",circumference);
    printf("The area is %0.2f\n", area);
    
    return 0;
}



