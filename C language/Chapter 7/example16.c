//Create an array of size 3*10 containing muliplication tables of the numbers 2,7 and 9 respectively(OR).

#include <stdio.h>
int main()
{
    int table[3][10];
    for(int i=0;i<10;i++){
        table[0][i] = 2*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("2 X %d = %d\n",i+1,table[0][i]);    
    }

        for(int i=0;i<10;i++){
        table[1][i] = 7*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("7 X %d = %d\n",i+1,table[1][i]);    
    }

    for(int i=0;i<10;i++){
        table[2][i] = 9*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("9 X %d = %d\n",i+1,table[2][i]);    
    }

    return 0;
}