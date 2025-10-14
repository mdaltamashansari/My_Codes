//WAP to to take string as an input from the user using %c and %s. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30],str2[30];
    int i=0;
    char c;
    printf("Enter your first string: ");
    scanf("%s",&str1);

    printf("Enter your second string character by character: ");
    while(c != '\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i] = c ;
        i++;
    }
    str2[i-1] = '\0';


    printf("First string: %s\n",str1);
    printf("second string: %s\n",str2);

    printf("Comparison b/w both strings is %d\n",strcmp(str1,str2));

    return 0;
}