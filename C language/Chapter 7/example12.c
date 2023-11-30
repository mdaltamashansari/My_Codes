//Repeat previous problem for a general input provided by the user using scanf.

#include <stdio.h>

void printTable(int arr[], int size, int n){
    for(int i=0; i<size; i++){
        printf("%d * %d = %d\n", n, i+1, arr[i]);
    }
}

int main()
{
    int arr[10], n;
    int size =10;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<10; i++){
        arr[i] = n * (i+1);
    }
    printTable (arr, size,n);

    return 0;
}