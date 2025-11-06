//WAP  to encrypt a string by adding 1 to the ascii value of its characters.
//WAP to decrypt the string encrypted using encrypt function in previous ques.
#include <stdio.h>
void decrypt(char*str){
    int i=0;
    while (str[i]!='\0'){
        str[i] = str[i] - 1;
        i++;
    }  
}
void encrypt(char*str){
    int i=0;
    while (str[i]!='\0'){
        str[i] = str[i] + 1;
        i++;
    }   
}
int main()
{
    char str[] = "The password is hello world";
    printf("Input is %s\n",str);
    encrypt(str);
    printf("encrypted string is %s\n",str);
    decrypt(str);
    printf("decrypted string: %s\n",str);
    return 0;

}
