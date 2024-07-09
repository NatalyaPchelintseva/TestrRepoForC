// task05.c
// Написать простейший калькулятор на 4 действия: 
// сумма, разность, умножение, деление.

#include <stdio.h>


int main() {
    int n1 = 0, n2 = 0, sum = 0, diff = 0, prod = 0;
    float div = 0.0;
    char operation;
    printf("enter two numbers and operation: ");
    scanf("%d %d %c", &n1, &n2, &operation);
    switch (operation)
    {
    case '+':
        sum = n1 + n2;
        printf("%d", sum);
        break;
    case '-':
        diff = n1 - n2;
        printf("%d", diff);
        break;
    case '*':
        prod = n1 * n2;
        printf("%d", prod);
        break;
    case '/':
        if (n2 != 0) {
            div = (float)n1 / n2;
            printf("%4.2f", div);
        }
        else {
            printf("division by zero!");
        }
        break;
    default:
        printf("invalid operation!");
    }

    return 0;
}