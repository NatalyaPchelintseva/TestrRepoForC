#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int GetMax(int a[], int size) {
    int m = a[0];
    for(int i = 1; i < size; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    return m;
}

int GetMin(int a[], int size) {
    int m = a[0];
    for(int i = 1; i < size; i++) {
        if (a[i] < m) {
            m = a[i];
        }
    }
    return m;
}

void PrintArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%4d", a[i]);
    }
    putchar('\n');
}

int main() {
    srand(time(0));
    char *filename = "numbers.txt";
    
    FILE *file = fopen(filename, "w");

    if (file) {
        int n = 0;
        for(int i = 0; i < SIZE; i++) {
            n = rand()%100 - 50;
            fprintf(file, "%d\n", n);
        }
        fclose(file);
        printf("File has been written successfully!\n");
    }

    int array[SIZE];
    file = fopen(filename, "r");

    if (file) {
        int i = 0, n = 0;
        while(!feof(file)) {
            fscanf(file, "%d", &array[i]);
            i++;
        }
        fclose(file);
        printf("The data has been read successfully!\n");
    }

    PrintArray(array, SIZE);
    printf("MAX of array: %d\n", GetMax(array, SIZE));
    printf("MIN of array: %d\n", GetMin(array, SIZE));

    return 0;
}