//Passing value to function

#include<stdio.h>
#include<math.h>

int sum(int a, int b);

int main(){
    int ans = sum(5,9);
    printf("The sum is %d\n", ans);
    return 0;
}

//int sum(int a, int b);
// int c=a+b;
//  // printf("The sum is %d in function\n",c);
// return c;
//}

int sum(int a, int b){
    return a+b;
}