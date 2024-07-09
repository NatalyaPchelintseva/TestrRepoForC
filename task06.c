// Для 10 чисел, введённых пользователем, определить сумму, 
// произведение, среднее арифметическое значение, максимум и минимум.

#include <stdio.h>


int main() {
    int number=0, sum=0, product=1, min=32000, max=-32000;
    
    for(int i = 0; i<10; i++) {
        printf("enter a value: ");
        scanf("%d", &number);
        sum += number;
        product *= number;
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    printf("sum = %d, product = %d, average = %0.2f, min = %d, max = %d", 
            sum, product, sum/10.0, min, max);

    return 0;
}