// task03.c
// Среди трёх различных чисел найти среди них минимальное и максимальное значение.

#include <stdio.h>


int main() {
    int n1 = 0, n2 = 0, n3 = 0;
    int min = 0, max = 0;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        max = n1;
    }
    else {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }

    if (n1 > n2) {
        min = n2;
    }
    else {
        min = n1;
    }
    if (n3 < max) {
        min = n3;
    }

    printf("min = %d, max = %d", min, max);
    
    return 0;
}