#include <stdio.h>
#include <malloc.h>
#define SIZE 10

int main() {
    int n = 0;
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}