//Repeat previous problem for a custom input given by te user.

#include <stdio.h>

void printTable(int *table, int num, int size){
    printf("The table of %d is: \n",num);
    for(int i=0; i<size;i++){
        table[i]= num*(i+1);
    }

    for(int i=0;i<size;i++){
        printf("%d X %d = %d\n",num,i+1,table[i]);
    }
    printf("******************************************\n");
}

int main()
{
    int table[3][10];
    int size=10;
    int a,b,c;
    printf("Enter three nos. to print table of: ");
    scanf("%d %d %d",&a,&b,&c);
    printTable(table[0],a,size);
    printTable(table[1],b,size);
    printTable(table[2],c,size);
    
    return 0;
}