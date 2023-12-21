#include <stdio.h>

void printMatrix(double matrix[2][2])              // ��� ��� �Լ�
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


int inverseMatrix(double matrix[2][2], double inverse[2][2])                   // ����� ��� �Լ�
{
    double det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if (det == 0) 
    {
        printf("������� �������� �ʽ��ϴ�. �ٽ� �Է��ϼ���.\n");
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

   
    do {                                                     // ��� �Է�
        printf("2x2 ����� ���Ҹ� �Է��ϼ���:\n");
        for (int i = 0; i < 2; i++) 
        {
            for (int j = 0; j < 2; j++) 
            {
                scanf_s("%lf", &matrix[i][j]);
            }
        }
    } while (!inverseMatrix(matrix, inverse));

    
    printf("�Է��� ���:\n");               // �Է��� ��� ���
    printMatrix(matrix);

    
    printf("\n�����:\n");                 // ����� ���
    printMatrix(inverse);

    return 0;
}
