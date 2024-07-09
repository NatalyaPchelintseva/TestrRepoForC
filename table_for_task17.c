#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;

    for(x =- 3.14159; x <= 3.14159; x += 1.0)
    {
        y = sin(x);
        printf("%5.2f\t%5.2f\n", x, y);
    }

    return(0);
}