#include <stdio.h>


void PrintArray(int x[], int size) {
    for(int i = 20-size; i < 20; i++) {
        printf("%d", x[i]);
    }
    putchar('\n');
}

void GetArray(int x[], int size) {
    int len = 0;
    printf("enter the length of number: ");
    scanf("%d", &len);
    if (len < 20) {
        int offset = 20 - len;
        for(int i = offset; i < size; i++) {
            scanf("%d", &x[i]);
        }
    }
    else {
        printf("the length is out of range!");
    }
}

int GetLen(int x[], int size) {
    int len = -1;
    for(int i = 0; i < size; i++) {
        if (x[i] != 0) {
            len = i;
            break;
        }
    }
    if (len != -1) {
        len = size - len;
    }
    return len;
}

void GetSum(int x[], int y[], int r[], int x_len, int y_len) {
    int size = (x_len > y_len) ? x_len : y_len;
    int div = 0;
    for(int i = 19; i >= 20-size; i--) {
        r[i] = (div + x[i] + y[i]) % 10;
        div = (div + x[i] + y[i]) / 10;
    }
}

void GetSubtraction(int x[], int y[], int r[], int x_len, int y_len, char *sign) {
    int size = (x_len > y_len) ? x_len : y_len;
    if (x_len > y_len) {
        for(int i = 19; i >= 20-size; i--) {
            if (x[i] >= y[i]) {
                r[i] = x[i]-y[i];
            }
            else {
                r[i] = (x[i]+10)-y[i];
                x[i-1] -= 1;
            }
        }
        *sign = '+';
    }
    else {
        for(int i = 19; i >= 20-size; i--) {
            if (y[i] >= x[i]) {
                r[i] = y[i]-x[i];
            }
            else {
                r[i] = (y[i]+10)-x[i];
                y[i-1] -= 1;
            }
        }
        *sign = '-';
    }

}



int main() {
    int n1[20] = {0}, n2[20] = {0}, sum[20] = {0}, sub[20] = {0};
    char sign = '\0';

    GetArray(n1, 20);
    GetArray(n2, 20);
    int n1_len = GetLen(n1, 20);
    int n2_len = GetLen(n2, 20);
    printf("n1: ");
    PrintArray(n1, n1_len);
    printf("n2: ");
    PrintArray(n2, n2_len);
    GetSum(n1, n2, sum, n1_len, n2_len);
    int sum_len = GetLen(sum, 20);
    printf("sum of n1 and n2: ");
    PrintArray(sum, sum_len);
    GetSubtraction(n1, n2, sub, n1_len, n2_len, &sign);
    int sub_len = GetLen(sum, 20);
    printf("substraction of n1 and n2: %c", sign);
    PrintArray(sub, sub_len);

    return 0;
}