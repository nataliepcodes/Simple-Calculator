#include <stdio.h>

/*
ask a user input for number 1
ask a user input for operator
ask a user input for number 2
calculate the result
display the result
*/

void calculate(double a, double b, char operator)
{
    double result;

    if (operator == '+')
    {
        printf("%.1lf\n", result = a + b);
    } 
    else if (operator == '-')
    {
        printf("%.1lf\n", result = a - b);
    }
    else if (operator == '*')
    {
        printf("%.1lf\n", result = a * b);
    }
    else if (operator == '/')
    {
        printf("%.1lf\n", result = a / b);
    }
    else 
    {
        printf("INVALID OPERATOR\n");
    }

}

int main()
{
    double num1, num2, result;
    char operator;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator(+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    calculate(num1, num2, operator);


    return 0;
}