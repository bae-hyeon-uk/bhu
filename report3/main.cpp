#include <stdio.h>


void bubbleSort(int arr[], int n)                     // ���� ���� �Լ�
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
        {
             if (arr[j] > arr[j + 1])                  // ���� ��Ұ� ���� ��Һ��� ũ�� ��ȯ
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;                    // arr[j]�� arr[j+1] ��ȯ
            }
        }
    }
}

int main()
{
    int nRawArr[] = { 232, 244, 878, 754, 351, 481, 137, 115, 253, 986, 236 };        // �־��� �迭
    int n = sizeof(nRawArr) / sizeof(nRawArr[0]);

    
    printf("���� �迭: ");                                              
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", nRawArr[i]);                                   // ���� �迭 ���
    }

     bubbleSort(nRawArr, n);                                        // �������� ���� ����

    
    printf("\n���ĵ� �迭 (��������): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nRawArr[i]);                                  // ���ĵ� �迭 ���
    }

    return 0;
}
