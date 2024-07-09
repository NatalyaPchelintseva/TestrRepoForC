#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void RandomFillArray(int[], int);
void PrintArray(int[], int);
void LeftShiftNegativeElements(int [], int);


int main() {
    srand(time(0));
    int a[15];

    RandomFillArray(a, 15);
    PrintArray(a, 15);
    LeftShiftNegativeElements(a, 15);
    PrintArray(a, 15);

    int b[15];

    RandomFillArray(b, 15);
    PrintArray(b, 15);
    LeftShiftNegativeElements(b, 15);
    PrintArray(b, 15);

    return 0;
}

void RandomFillArray(int x[], int size) {
    for(int i = 0; i < size; i++) {
        x[i] = rand()%100 - 50;
    }
}

void PrintArray(int x[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%4d", x[i]);
    }
    putchar('\n');
}

void LeftShiftNegativeElements(int x[], int size) {
    int j = 0, buff = 0;
    for(int i = 0; i < size; i++) {
        if (x[i] < 0) {
            if (i != j) {
                buff = x[i];
                x[i] = x[j];
                x[j] = buff;
            }
            j++;
        }
    }
}