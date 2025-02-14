#include <stdio.h>
int main()
{
    // write a programm to find out area of rectangle is grater than perimter
   int l,b,a,p;
   printf("Enter Value of length: ");
   scanf("%d",&l);
   printf("Enter Value of breath: ");
   scanf("%d",&b);
   a = l*b;
   printf("Area of Rectangle: %d\n",a);
   p = 2*l+2*b;
   printf("Permeter of Rectangle: %d\n",p);
   if(a>p) printf("-->Area of rectangle is grater than perimter");
   if(p>a) printf("-->Permeter of recangle is grater area");
    return 0;
}