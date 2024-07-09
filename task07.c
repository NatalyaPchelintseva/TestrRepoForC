// Организовать ввод целых чисел, пока пользователь не введёт 0.
// Найти количество чисел, заканчивающихся на цифру 9.

#include <stdio.h>


int main() {
    int number=0, count=0;
    do {
        printf("enter a value: ");
        scanf("%d", &number);
        if (number % 10 == 9) {
            count++;
        }
    } while (number != 0);   

    printf("count = %d", count);

    return 0;
}