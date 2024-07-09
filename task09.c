// Создать массив из 15 целых чисел. 
// Найти в массиве количество чётных элементов.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


int main() {
    int count=0;
    int a[SIZE];

    srand(time(0));
    for(int i = 0; i < SIZE; i++) {
        a[i] = rand()%100-50;
        printf("%4d", a[i]);
        if (a[i] % 2 == 0) {
            count++;
        }
    }

    printf("\ncount = %d", count);

    return 0;
}