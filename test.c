#include <stdio.h>
#include <math.h>
#define PI 3.14


int main() {
// Определение границ для x
const double min_x = -10*PI;
const double max_x = 10*PI;
const int num_points = 100; // Количество точек для графика

// Вычисление шага для x
double step = (max_x - min_x) / num_points;

// Переменная для хранения текущего значения x
double x = min_x;

// Построение графика
for (int i = 0; i <= num_points; ++i) {
 printf("%f %f\n", x, sin(x));
 x += step;
}

return 0;
}