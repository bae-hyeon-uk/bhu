#include <stdio.h>
#include <stdlib.h>

int main() {
    double* numbers = NULL; // ������ �ʱ�ȭ
    double input;
    int size = 0;
    double sum = 0;

    printf("�Ǽ��� �Է��ϰ� ��ġ���� 0�� �Է��ϼ���.\n");

    do 
    {
        printf("�Ǽ� �Է�: ");
        scanf_s("%lf", &input);

        if (input != 0) 
        {
            size++;
            numbers = (double*)realloc(numbers, size * sizeof(double));             // �Էµ� ���ڸ� �������� �Ҵ�� �迭�� �߰�

            if (numbers == NULL) 
            {
                printf("�޸� �Ҵ� ����\n");
                return 1;
            }

            numbers[size - 1] = input;
        }
    } while (input != 0);

     for (int i = 0; i < size; i++)       // �Էµ� ���ڵ��� �� ���
     {                                                        
        sum += numbers[i];
     }

   
    printf("�Էµ� ���ڵ��� ��: %lf\n", sum);               // ��� ���

    free(numbers);            // �������� �Ҵ��� �޸� ����

    return 0;
}
