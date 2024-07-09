// Дан массив из 20 случайных целых чисел. 
// Все четные элементы перенести в новый массив. 
// Вывести на экран полученный массив.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20


int main() {
    srand(time(0));
    int a[SIZE];
    printf("array a:\n");
    for(int i = 0; i < SIZE; i++) {
        a[i] = rand()%100 - 25;
        printf("%5d", a[i]);
    }
    printf("\n");
    int b[SIZE];
    int bSize = 0, j = 0;
    for(int i = 0; i <SIZE; i++) {
        if (a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        }
    }
    bSize = j;
    printf("array b:\n");
    for(int i = 0; i < bSize; i++) {
        printf("%5d", b[i]);
    }

    return 0;
}