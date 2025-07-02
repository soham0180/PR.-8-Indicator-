#include <stdio.h>

#define ROWS 3
#define COLS 3


void cubeElements(int *arr, int rows, int cols) {
    int total = rows * cols;
    for (int i = 0; i < total; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int array[ROWS][COLS];

   
    printf("Enter elements of %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }


    cubeElements(&array[0][0], ROWS, COLS);

  
    printf("\nCubed Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
