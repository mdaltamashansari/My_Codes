//Input and output using loop

#include <stdio.h>
int main()
{
    int arr[12];
    int size = sizeof(arr)/sizeof(arr[0]);
    //Taking user input in the array using loops
    for(int i=0; i<size; i++){
        printf("Enter the value of %d element:",i);
        scanf("%d", &arr[i]);
    }
    //Printing out the array using loops
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    
    return 0;
}