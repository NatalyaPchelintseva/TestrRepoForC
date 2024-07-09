#include <stdio.h>
  
int main(void) {
    int numbers[3][4] = { {21, 2, 3, 4}, {5, 84, 7, 8}, {9, 42, 11, 12} };
    int rows = 3;           
    int columns = 4;  
    
    for(int i =0; i < rows; i++) {
        for(int j =0; j<columns; j++) {
            printf("numbers[%d][%d] = %d \n", i, j, numbers[i][j]);
        }
    }

    int count = 0;
    for(int i =0; i < rows; i++) {
        for(int j =0; j<columns; j++) {
            if ((numbers[i][j] % 3 == 0) && (numbers[i][j] % 7 == 0)) {
                count++;
            }
        }
    }

    printf("\ncount = %d", count);

    return 0;
}