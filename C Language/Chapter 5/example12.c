//WACP to find the perimeter and area of a rectangle using function.

#include<stdio.h>

int peri(int l, int b)
{
    return 2*(l+b);
}

int are(int l, int b)
{
    return (l*b);
}

int main()
{
    int length, breadth;
    printf("Enter the value of length ");
    scanf("%d", &length);
    printf("Enter the value of breadth ");
    scanf("%d", &breadth);
    int perimeter= peri(length,breadth);
    int area= are(length,breadth);
    printf("The perimeter of rectangle is %d\n", perimeter);
    printf("The area of rectangle is %d\n", area);

    return 0;
}
