//printing arrays from a loop

#include <stdio.h>
int main()
{
    int arr[]= {54,68,24,254,225,14,2,45,78};
    int size= 9;
    for(int i=0; i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}