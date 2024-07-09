// task01
// Ввести два действительных числа. Вывести в одной строке сумму, 
// разность, произведение, среднее арифметическое чисел с точностью два знака.

#include <stdio.h>


int main() {
    float n1 = 0.0, n2 = 0.0;
    float sum = 0.0, diff = 0.0, prod = 0.0, average = 0.0;

    scanf("%f %f", &n1, &n2);

    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    average = sum / 2;

    printf("%4.2f %4.2f %4.2f %4.2f", sum, diff, prod, average);

    return 0;
}