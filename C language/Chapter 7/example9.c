//Taking input and printing a 2D array through function.

#include <stdio.h>
void printArray(int arr[][2], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("The value of element [%d][%d]: is %d\n", i,j,arr[i][j]);
    }   
  }
}
int main()
{
    //Creating 2 dimensional Array
    int arr[3][2];
    int m=3;
    int n=2;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter the value of element [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printArray(arr,m,n);
    return 0;
}