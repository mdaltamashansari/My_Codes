#include<stdio.h>
//C program to print Hello world 10 times.
//do-while is also called exit controlled loop
int main(){
//     int i=1;  //counter variable or
//               //initialize
// do {
//     printf("Hello world\n");
//     i+=1;
// } while(i<=10);
// return 0;
// }              

int i=1;
while (i<=10){
    printf("%d",i);
    i++;
}
return 0;
}