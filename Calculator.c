#include <stdio.h>
int main() {

    char op;
    int a, b;
    int result;

    int valid = 0;

    while (valid == 0) {

    printf("Before everything, please enter two numbers: \n");
    scanf(" %d %d", &a, &b);

    printf("Please enter an operator: \n");
    scanf(" %c", &op);

    switch(op) {

    case '+':
    result = a + b;
    printf("The result is: %d\n", result);
    valid = 1;
    break;

    case '-':
    result = a - b;
    printf("The result is: %d\n", result);
    valid = 1;
    break;

    case '*':
    result = a * b;
    printf("The result is: %d\n", result);
    valid = 1;
    break;

    case '/':
    if (b != 0) {

    result = a / b;
    printf("The result is: %d\n", result);
    valid = 1;
    }

    else
    printf("Sorry, cannot divide by 0.\n");
    break;

    default:
    printf("Sorry, I did not recognize that character.\n");

    }

    if (valid == 0) {

    printf("Please try again.\n\n");

    }

    }

    return 0;
}
