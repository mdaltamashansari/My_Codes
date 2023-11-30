#include<stdio.h>
//C program to count total no. of notes in given amount
int main(){
    int amount;
    int note500,note200,note100,note50,note20,note10,note5,note2,note1;
    note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    if(amount>=500){
        note500= amount/500;
        amount= amount- note500*500;
    }
    if(amount>=200){
        note200= amount/200;
        amount= amount- note200*200;
    }
    if(amount>=100){
        note100= amount/100;
        amount= amount- note100*100;
    }
    if(amount>=50){
        note50= amount/50;
        amount= amount- note50*50;
    }
    if(amount>=20){
        note20= amount/20;
        amount= amount- note20*20;
    }
    if(amount>=10){
        note10= amount/10;
        amount= amount- note10*10;
    }
    if(amount>=5){
        note5= amount/5;
        amount= amount- note5*5;
    }
    if(amount>=2){
        note2= amount/2;
        amount= amount- note2*2;
    }
    if(amount>=1){
        note1= amount/1;
        amount= amount- note1*1;
    }
    printf("Total no. of notes:\n ");
    printf("note500= %d\n", note500);
    printf("note200= %d\n", note200);
    printf("note100= %d\n", note100);
    printf("note50= %d\n", note50);
    printf("note20= %d\n", note20);
    printf("note10= %d\n", note10);
    printf("note5= %d\n", note5);
    printf("note2= %d\n", note2);
    printf("note1= %d\n", note1);
    return 0;
}
