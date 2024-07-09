// task02.c
// Определить, является ли введённое пользователем число чётным.

#include <stdio.h>


int main() {
    int n = 0;
    printf("enter number\n");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("even");
    }
    else {
        printf("not even");
    }

    return 0;
}