// Определить число Фибоначчи по его порядковому 
// номеру двумя способами: итеративным и рекурсивным.

#include <stdio.h>

int fibonacci(int N)  
{
    if (N == 1)
        return 0;
    if (N == 2)
        return 1;
    return fibonacci(N - 1) + fibonacci(N - 2); 
}

int main() {
    int N;
    printf("N="); 
    scanf("%d", &N);
    int a=1, b=1, c=0;
    if (N <= 2) 
        printf("1");
    else {
        for (int i = 3; i <= N; i++) {
            c = a + b; 
            a = b; 
            b = c; 
        }
        printf("%d ", b); 
    }

    printf("\nThe Fibonacci number with recursion: %d", fibonacci(N));

    return 0;
}