#include <stdio.h>


void bubbleSort(int arr[], int n, int order)           // 버블 정렬 함수
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            
            if ((order == 0 && arr[j] > arr[j + 1]) || (order == 1 && arr[j] < arr[j + 1]))        // 현재 숫자가 다음 숫자보다 크거나(order == 0) 작으면(order == 1) 교환
            {
                
                int temp = arr[j];                                                                     
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;           // arr[j]와 arr[j+1] 교환
            }
        }
    }
}

int main() 
{
    
    int nRawArr[] = { 232, 244, 878, 754, 351, 481, 137, 115, 253, 986, 236 };     // 주어진 배열
    int n = sizeof(nRawArr) / sizeof(nRawArr[0]);

    printf("원본 배열: ");                        // 원본 배열 출력
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nRawArr[i]);
    }

    bubbleSort(nRawArr, n, 1);                        // 내림차순 정렬 수행

    printf("\n정렬된 배열 (내림차순): ");               // 정렬된 배열 출력
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nRawArr[i]);
    }

    return 0;
}
