//WAP containing a function which reverses the array passed to it.
#include <stdio.h>

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);     //space should be given after %d
    }
}

void reverseArray(int arr[], int size){
    int i=0, temp;
    while(i<size/2){
        temp = arr[i];
        arr[i]= arr[size-i-1];
        arr[size-i-1] = temp;
        i++;
    }
}
int main()
{
    int arr[]= {12,65,38,36,11,35,24,53};
    int size= sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printArray(arr,size);

    return 0;
}