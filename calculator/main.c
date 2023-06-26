#include <stdio.h>
#include <stdlib.h>

// Function to perform the  operation
void performOperation(int a, int b, char option)
{
    // Using a switch statement to perform the operation
    switch (option)
    {
    case '+':
        printf("Total: %d\n", a + b);
        break;
    case '-':
        printf("Total: %d\n", a - b);
        break;
    case '*':
        printf("Total: %d\n", a * b);
        break;
    case '/':
        printf("Total: %f\n", (float)a / b); // Convert one value to a float for floating-point division
        break;
    default:
        printf("Invalid operation symbol.\n"); // In the case where the user inputs an operation that is not valid
    }
}

int main()
{
    // Initializing our variables
    int a, b;
    char option;

    // To get our math values 1
    printf("Input your first digit: ");
    scanf("%d", &a);

    // To get our math values 2
    printf("Input your second digit: ");
    scanf("%d", &b);

    // Getting the operation to be performed on our values
    printf("Input operation symbol: ");
    scanf(" %c", &option);

    performOperation(a, b, option);

    return 0;
}
