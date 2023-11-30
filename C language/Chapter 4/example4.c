#include <stdio.h>
//WACP to print 1 to n
int main()
{ 
    int n;
printf("Enter your no.: ");
scanf("%d", &n);

// for(int i=1; i<=n; i++){
//     printf("%d\n", i);
// }

int i=1;
while (i<=n)
{
   printf("%d\n", i);
   i++;
}

return 0;
}