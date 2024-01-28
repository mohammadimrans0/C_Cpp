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

    int flag = 1;
    if(row != col){
        flag = 0;
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col;j++){
            // primary scalar matrix
            if(i == j){
                if(a[i][j] != a[0][0]){
                    flag = 0;
                }

                continue;
            }

            // secondary scalar matrix
            // if(i + j == row - 1){
            //     if(a[i][j] != a[0][row - 1]){
            //         flag = 0;
            //     }
            //     continue;
            // }

            if(a[i][j] != 0){
                flag = 0;
            }
        }
    }
    
    if( flag == 1){
        printf("Scalar Matrix\n");
    }else{
        printf("Not Scalar Matrix\n");
    }

    return 0;
}