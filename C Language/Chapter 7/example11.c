//WAP to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>
int main()
{
    int arr[10],n;
    n = 5;
    for(int i=0; i<10; i++){
        arr[i] = n * (i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d * %d = %d\n", n, i+1, arr[i]);
    }

    return 0;
}