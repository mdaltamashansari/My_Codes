#include <stdio.h>
//WACP to print n to 1
int main()
{ 
    int n, i;
printf("Enter your no.: ");
scanf("%d", &n);

//for(int i=n; i>=1; i--){
  //  printf("%d\n", i);
//}

//i=n;
//while(i>=1){
  //  printf("%d\n",i);
   // i--;
//}

i=n;
do{
   printf("%d\n", i);
   i--; 
}while(i>=1);

return 0;
}