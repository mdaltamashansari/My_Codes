//WACP to find the simple interest using funcion.

#include<stdio.h>

float si(float P, float R, float T )
{
    return(P*R*T/100);
}

int main()
{
    float P, R, T;
    printf("Enter the value of P,R,T ");
    scanf("%f %f %f",&P,&R,&T);
    float simple_interest = si(P,R,T);
    printf("The si is %f", simple_interest);

    return 0;
}