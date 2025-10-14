#include <stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the age of Altamsh here: ");
    scanf("%d",&r); 
    printf("Enter the age of Muhammad here: ");
    scanf("%d",&s);
    printf("Enter the age of Harry here: ");
    scanf("%d",&a);
    if(r<s){
        if (r<a) printf("Ram is youngest ");
    }
    if(s<r){
        if (s<a) printf("Shyam is youngest ");
    }
    if(a<s){
        if (a<r) printf("Ajay is youngest ");
    }
    return 0;
}