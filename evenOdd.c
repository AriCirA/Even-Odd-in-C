//Author: Red Programmer
//Date : 27/7/2019
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    //even or odd
    if(number % 2 == 0) 
    {
        printf("The number is even\n");
    }else printf("The number is odd\n");

    return 0;
}