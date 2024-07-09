// Создать массив из 50 элементов. Отсортировать его 
// по возрастанию методом пузырька.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    const int SIZE=15;
    int a[SIZE];

    srand(time(0));
    printf("\nthe sorced array:\t");
    for(int i = 0; i < SIZE; i++) {
        a[i] = rand()%50 - 25;
        printf("%4d", a[i]);
    }

    int buff=0;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if (a[i] < a[j]) {
                buff = a[i];
                a[i] = a[j];
                a[j] = buff;
            }
        }
    }

    printf("\nthe modified array: \t");
    for(int i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    return 0;
}
