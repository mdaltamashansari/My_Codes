#include<stdio.h>
//calculate the area and perimeter of square
int main(){
    int side;
    printf("Enter the value of side: ");
    scanf("%d", &side);
    int area = side * side;
    int perimeter = 4 * side;
    printf("Area of square: %d\n", area);
    //(\n)-->changes line o console or terminal
    printf("primeter of square: %d", perimeter);
    return 0;
}