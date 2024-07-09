#include <stdio.h>
#include <math.h>

// наибольший общий делитель - Greatest common divisor
int gcd(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;        
    }
    return abs(a);
 }

 // наименьшее общее кратное - Least common multiple
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int main() {
    printf("enter the x and the y: ");
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    printf("gsd of %d and %d is: %d\n", x, y, gcd(x, y));
    printf("lcm of %d and %d is: %d\n", x, y, lcm(x, y));

    return 0;
}