#include <stdio.h>
#include <math.h>

#define WIDTH 60
#define HEIGHT 20
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1

char grid[HEIGHT][WIDTH];

int plot(int x, int y);
void init_grid(void);
void show_grid(void);

int main()
{
    float x,y;

    init_grid();
    for(x = -3.14159; x <= 3.14159; x += 0.1) {
        y = sin(x);
        plot((float)(x*10), rintf(y*8));
    }
    show_grid();

    return(0);
}

int plot(int x, int y) {
    if(x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    grid[Y-y][X+x] = '*';
    return(0);
}

void init_grid(void) {
    int x,y;

    for(y = 0; y < HEIGHT; y++) {
        for(x = 0; x < WIDTH; x++) {
            grid[y][x] = ' ';
        }
    }
     
    for(y = 0; y < HEIGHT; y++) {
        grid[y][X] = '|';
    }

    for(x=0;x<WIDTH;x++) {
        grid[Y][x] = '-';
    }

    grid[Y][X] = '+';
}

void show_grid(void) {
    int x,y;

    for(y = 0; y < HEIGHT; y++) {
        for(x = 0; x < WIDTH; x++) {
            printf("%c", grid[y][x]);
        }
        printf("\n");
    }
}