#include<stdio.h>

int main(){
    int row, col, x, y;
    printf("Enter the number of row and col: ");
    scanf("%d%d", &row, &col);
    int matrix[row][col];
    int tMatrix[col][row];

    for(x = 0; x < row; x++){
        for(y = 0; y < col; y++){
            scanf("%d", &matrix[x][y]);
        }
    }
      
    for (int x = 0; x < row; ++x){
        for (int y = 0; y < col; ++y) {
            tMatrix[y][x] = matrix[x][y];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for (x = 0; x < col; ++x)
    for (y = 0; y < row; ++y) {
        printf("%d  ", tMatrix[x][y]);
        if (y == row - 1) printf("\n");
    }

    return 0;
}