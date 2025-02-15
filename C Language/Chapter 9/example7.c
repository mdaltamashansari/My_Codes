//Create a two dimensional vector using structures in C.
//Wrie a function sumVector which returns the sum of two vectors passed to it.The vectors must be two-dimensional.

#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

vec sumVector(vec v1, vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y= v1.y + v2.y;
    return result; 
}

int main()
{
    vec v1 = {5,6};
    vec v2 = {10,15};
    vec ans = sumVector(v1,v2);
    printf("The sum of x part is %d\n",ans.x);
    printf("The sum of y part is %d\n",ans.y);

    return 0;
}