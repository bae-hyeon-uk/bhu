#include <stdio.h>

void printMatrix(double matrix[2][2])              // 행렬 출력 함수
{
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}


int inverseMatrix(double matrix[2][2], double inverse[2][2])                   // 역행렬 계산 함수
{
    double det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if (det == 0) 
    {
        printf("역행렬이 존재하지 않습니다. 다시 입력하세요.\n");
        return 0;
    }

    inverse[0][0] = matrix[1][1] / det;
    inverse[0][1] = -matrix[0][1] / det;
    inverse[1][0] = -matrix[1][0] / det;
    inverse[1][1] = matrix[0][0] / det;

    return 1;
}

int main() 
{
    double matrix[2][2], inverse[2][2];

   
    do {                                                     // 행렬 입력
        printf("2x2 행렬의 원소를 입력하세요:\n");
        for (int i = 0; i < 2; i++) 
        {
            for (int j = 0; j < 2; j++) 
            {
                scanf_s("%lf", &matrix[i][j]);
            }
        }
    } while (!inverseMatrix(matrix, inverse));

    
    printf("입력한 행렬:\n");               // 입력한 행렬 출력
    printMatrix(matrix);

    
    printf("\n역행렬:\n");                 // 역행렬 출력
    printMatrix(inverse);

    return 0;
}
