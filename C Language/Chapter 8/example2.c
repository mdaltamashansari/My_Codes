//array or string
#include <stdio.h>
int main()
{
    //input and output of string
    char str[10];
    printf("Enter your name: ");
    scanf("%s",&str);
    printf("The name you input was \n%s",str);    
    return 0;
}
//scanf %s is used to input only a single word value inside the array