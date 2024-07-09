#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// void RandomFillMatrix(int [5][5]);
void PrintMatrix(int* [5], int);
// int GetSumOfMainDiagonal(int*, int, int);

int main() {
    srand(time(0));
    int a[5][5];

    // RandomFillMatrix(a[5][5]);
    PrintMatrix(&a[5][5], 5);


    return 0;
}

// void RandomFillMatrix(int x[5][5]) {
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             x[i][j] = rand()%100 - 50;
//         }
//     }
// }
void PrintMatrix(int* x[5], int size) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%5d", x[i][j]);
        }
        putchar('\n');
    }
}

// int GetSumOfMainDiagonal(int*, int, int) {

// }