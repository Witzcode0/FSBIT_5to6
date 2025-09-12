#include <stdio.h>

int main() {
    // syntax : data_type array_name[row][col]
    int matrix1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matrix2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // Access elements of the 2D array
    
    // printf("%d\n", matrix[0][0]);
    // printf("%d\n", matrix[0][1]);
    // printf("%d\n", matrix[0][2]);
    // printf("%d\n", matrix[1][0]);
    // printf("%d\n", matrix[1][1]);
    // printf("%d\n", matrix[1][2]);
    
    int len_r = sizeof(matrix1)/sizeof(matrix1[0]);
    int len_c = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    printf("Total row: %d\n", len_r);
    printf("Total col: %d\n", len_c);
    
    for(int row = 0; row<len_r; row++){
        for(int col = 0; col<row+1; col++){
             printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    // for(int row = 0; row<len_r; row++){
    //     for(int col = 0; col<len_c; col++){
    //          printf("%d ", matrix1[row][col] + matrix2[row][col]);
    //     }
    //     printf("\n");
    // }
    return 0;
}