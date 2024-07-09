// Создать массив из 10 целых чисел случайным образом. 
// Ввести число N>10. Осуществить циклический сдвиг вправо на N элементов.
// Например:
// N=5, массив до сдвига: 1 2 3 4 5 6 7 8 9 0
// массив после сдвига: 0 9 8 7 6 1 2 3 4 5

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 20


int main() {
    printf("enter a size of array: ");
    int a[SIZE];

    srand(time(0));
    for(int i = 0; i < SIZE; i++) {
        a[i] = rand()%100 - 50;
        printf("%4d", a[i]);
    }

    int n = 0, first = 0, previous = 0, next = 0;
    printf("\nenter a step of shift: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        first = a[SIZE-1];
        previous = a[0];
        for(int j = 1; j < SIZE; j++) {
            next = a[j];
            a[j] = previous;
            previous = next;
        }
        a[0] = first;
    }

    printf("the modified array: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    return 0;
}
