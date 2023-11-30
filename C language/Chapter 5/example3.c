//WACP to display "goodMorning", "goodEvening" and "goodNight" using a function.

#include<stdio.h>

//function prototype
void display();
void goodMorning();
void goodEvening();
void goodNight();

int main(){
// display(); //function call
    goodMorning();
    goodEvening();
    goodNight();

    return 0;
}
//function definition
void display(){
    printf("Hi, i am display\n");
}

void goodMorning(){
    printf("Good Morning\n");
    goodEvening();
}

void goodEvening(){
    printf("Good Evening\n");
    goodNight();
}

void goodNight(){
    printf("Good Night\n");
}