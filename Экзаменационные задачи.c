//
//  Экзаменационные задачи.c
//
//
//  Created by Dylan Ines on 3/16/23.
//



// Задачи второго уровня.

// Задача про платиновый шар.

#include <math.h>
#include <stdio.h>

int main() {
    int radius;
    char z = '0';
    if (scanf("%d%c", &radius, &z) != 2 || z != '\n') {
        printf("n/a");
    } else {
        double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);  // radius * radius * radius
        double mass = 21500 * volume;
        double round = roundl(mass);  // round -- встроенная функция округления (пример: 5.7 = 6)
        printf("%.0lf", round);
    }
    return 0;
}

// Задача про перевод радиан в градусы.

#include <math.h>
#include <stdio.h>

int main() {
    double x;
    if (scanf("%lf", &x) != 1 || x < 0) {  // Если не нужна проверка на отрицательные, то убрать.
        printf("n/a");
    } else {
        double result = x * 57.29;
        double round_result = roundl(result);
        printf("%.0lf", round_result);
    }
    return 0;
}

// Задача про поиск максимума где “-1” означает конец ввода.

#include <stdio.h>

int main(void) {
    int max = -1;
    int current = 0;

    while (current != -1) {
        if (scanf("%d", &current) < 1) {
            break;
        }

        if (max < current) {
            max = current;
        }
    }

    if (max == -1) {
        printf("n/a");
    } else {
        printf("%d", max);
    }
}

// Задача на переставление первой и последней цифры числа.
// Два варианта.

#include <stdio.h>

int main() {
    int n, n1, n2, n3;
    scanf("%d", &n);
    n1 = n / 100;
    n2 = (n - n1 * 100) / 10;
    n3 = n - (n1 * 100) - (n2 * 10);
    printf("%d%d%d", n3, n2, n1);
    return 0;
}

#include <stdio.h>

int main() {
    int n, res;
    scanf("%d", &n);
    res = n / 100 + n % 100 / 10 * 10 + n % 10 * 100;
    printf("%d", res);
    return 0;
}

// Задача на переставление первого и последнего числа с минусом вначале.

#include <stdio.h>

int main() {
    int n1, n2, n3;
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("n/a");
    } else {
        n1 = n1 * (-1);
        n3 = n3 * (-1);
        printf("%d %d %d", n3, n2, n1);
    }
    return 0;
}



// Задачи четвёртого и пятого уровней.


//  Задача на поворот матрицы (с проверками вводимых значений).

#include <stdio.h>
#include<stdlib.h>
int input(int **mas,int str,int st);
void output(int **mas,int str,int st);
void povorot(int str,int st);

int main() {
    int str,st;
    if(scanf("%d%d",&str,&st)==2 && str > 0 && st > 0){     //определяем размер матрицы
        povorot(str,st);    //вызываем 
    }
    else printf("n/a"); // если проверки не прошли = ошибка
    return 0;
}
int input(int **mas, int str,int st){
    int flag = 1;   // флаг для проверки на ошибку. 1 = ошибок нет. 0 = есть ошибка
    for (int i=0;i<str;i++){    // цикл для перемещения по строкам
        for (int j=0;j<st;j++){     // цикл для перемещения по столбцам в строке
            if (!scanf("%d",&mas[i][j])&& flag){    // сканирует введенные данные. Если ввести не целое число или если флаг уже нулевой - прекращает цикл заполнения массива данными
                printf("n/a");  // выводит текст ошибки
                flag = 0;   // помечает флаг нулевым, чтобы при проверке цикла на условия цикл уже не отрабатывался
            } 
        }
    }
    return flag;    // возвращает значение флага ошибок. в main функции если флаг вернет 0, то main функция перестанет выполнять код. соответстнно если флаг будет 1, то main выполнит остальную часть своего кода
}

void output(int **mas,int str,int st){  //стандартная функция вывода данных из заполненного массива, который передается в эту функцию. можно прееделать под себя
    for (int i=0;i<str;i++){
        int j;
        for ( j=0;j < st - 1;j++)
            printf("%d ",mas[i][j]);
        printf("%d",mas[i][j]);
        if (i!= str-1) printf("\n");
    }
}

void povorot(int str,int st){   // функция поворота
    int **mas= malloc(str*sizeof(int *));   // выделяем память под первый двумерный массив
    for (int i=0;i<str;i++) mas[i]=malloc(st*sizeof(int));  //выделяем память для столбцов двумерного массива
    if (input(mas,str,st)){     // вызываем функцию заполнения первго массива, который мы инициализировали сверху
        int **res= malloc(st*sizeof(int *));    // выделяем память для второго двумерного массива. теперь строки = столбцы, а столбцы = строки
        for (int i=0;i<st;i++) res[i]=malloc(str*sizeof(int));      // выделяем память для строк второго массива
        int y = str-1;  //определяем позицию Y во вротом массиве, с которого начнется заполнение
        for (int i=0;i<str;i++){    
            int x=0;    //определяем позицию X, с которого начнется заполнение
            for (int j=0;j<st;j++){
                res[x][y]=mas[i][j];    //записываем значения из первого массива во второй массив. Т.к. координаты изменны, то данные идут как бы с поворотом на 90 градусов
                x++; //передвигаемся по втрокам вниз
            }
            y--; //передвигаемся по столбцам влево
        }
        output(res, st, str);   //запускаем функцию вывода данных из второго массива
        for (int i=0;i<st;i++) free(res[i]);    //освобождаем память второго массива чтобы не было утечек
        free(res);
    }
    for (int i=0;i<str;i++) free(mas[i]);   //освобождаем память первого массива чтобы не было утечек
    free(mas);
}