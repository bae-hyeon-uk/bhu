#include <stdio.h>
#include <stdlib.h>

int main() {
    double* numbers = NULL; // 포인터 초기화
    double input;
    int size = 0;
    double sum = 0;

    printf("실수를 입력하고 마치려면 0을 입력하세요.\n");

    do 
    {
        printf("실수 입력: ");
        scanf_s("%lf", &input);

        if (input != 0) 
        {
            size++;
            numbers = (double*)realloc(numbers, size * sizeof(double));             // 입력된 숫자를 동적으로 할당된 배열에 추가

            if (numbers == NULL) 
            {
                printf("메모리 할당 오류\n");
                return 1;
            }

            numbers[size - 1] = input;
        }
    } while (input != 0);

     for (int i = 0; i < size; i++)       // 입력된 숫자들의 합 계산
     {                                                        
        sum += numbers[i];
     }

   
    printf("입력된 숫자들의 합: %lf\n", sum);               // 결과 출력

    free(numbers);            // 동적으로 할당한 메모리 해제

    return 0;
}
