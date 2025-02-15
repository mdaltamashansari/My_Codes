//WAP containing functions which counts the number of positive integers in an array.

#include <stdio.h>
int positive(int arr[], int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[]= {-3,9,42,0,-12,-21,25,60};
    int n= sizeof(arr) / sizeof(arr[0]);

    printf("There are %d positive elements in array", positive(arr,n));

    return 0;
}