//printing arrays by passing them into fuctions
#include <stdio.h>

void printArray(int ar[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]= {54,68,24,2,64,35};
    int size= sizeof(arr)/ sizeof(arr[0]);
    int marks[]= {58,687,132,61,5,681,46,1,651,5};
    int m = sizeof(marks)/sizeof(marks[0]);

    printArray(arr, size);
    printArray(marks,m);

    return 0;
}