// task04.c
// Написать пользовательские функции для определения 
// минимального и максимального значений.

#include <stdio.h>

int min(int x, int y) {
    int min = x;
    if (y < min) {
        min = y;
    }
    return min;
}

int max(int x, int y) {
    int max = x;
    if (y > max) {
        max = y;
    }
    return max;
}


int main() {
    int n1 = 0, n2 = 0, n3 = 0;
    int minValue = 0, maxValue = 0;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < min(n2, n3))
    {
        minValue = n1;
    }
    else {
        minValue = min(n2, n3);
    }
    
    if (n1 > max(n2, n3))
    {
        maxValue = n1;
    }
    else {
        maxValue = max(n2, n3);
    }

    printf("min = %d, max = %d", minValue, maxValue);
    
    return 0;
}
