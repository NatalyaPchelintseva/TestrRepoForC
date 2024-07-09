#include <stdio.h>
int main () {
    int a = 15;
    int *ptr = &a;
    printf ("%d %d\n", a, *ptr);
    *ptr = 20;
        printf ("%d %d", a, *ptr);

    return 0;
}