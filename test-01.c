#include "main.h"

int main () {

    int num1, num2, sum;

    // User inputs two integers
    printf("Enter two integers:");

    //Store users data
    scanf("%d %d", num1, num2);

    //Calculate sum
    sum = num1 + num2;

    //Print sum
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}

