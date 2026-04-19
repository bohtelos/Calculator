#include <stdio.h>
int main() {

    char op;
    int a, b;
    int result;

    printf("Before everything, please enter two numbers: ");
    scanf(" %d %d", &a, &b);

    printf("Please enter an operator: ");
    scanf(" %c", &op);

    switch(op) {

    case '+':
    result = a + b;
    printf("The result is: %d", result);
    break;

    case '-':
    result = a - b;
    printf("The result is: %d", result);
    break;

    case '*':
    result = a * b;
    printf("The result is: %d", result);
    break;

    case '/':
    if (b != 0) {

    result = a / b;
    printf("The result is: %d", result);
    }

    else
    printf("Sorry, cannot divide by 0.");
    break;

    default:
    printf("Sorry, I did not recognize that character.");

    }

    return 0;
}
