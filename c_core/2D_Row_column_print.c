#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    // print exact row
    int exactRow;
    scanf("%d", &exactRow);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[exactRow][i]);
    }
    
    //print exact column
    int exactCol;
    scanf("%d", &exactCol);

    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][exactCol]);
    }

    return 0;
}