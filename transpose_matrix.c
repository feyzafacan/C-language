// question 19

#include <stdio.h>

void transpose_matrix(){
    int m,n;
    printf("matrix row : ");
    scanf("%d", &m);
    printf("matrix column : ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("enter the elements of matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++ ){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("transpose of matrix is:\n ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++ ){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

int main(){
    transpose_matrix();
    return 0;
}