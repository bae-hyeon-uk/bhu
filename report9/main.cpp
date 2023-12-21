#include <stdio.h>
#include <math.h>


typedef struct                   // 좌표 구조체 정의
{
    double x;
    double y;
} Point;


double calculateRadius(Point point)            // 원의 방정식을 이용하여 R 값을 계산하는 함수
{
    return sqrt(point.x * point.x + point.y * point.y);
}

int main() {
    Point inputPoint;

    printf("원의 방정식 X^2 + Y^2 = R^2에서 X와 Y 값을 입력하세요:\n");                 // 사용자로부터 X와 Y 값을 입력 받음
    printf("X 값: ");
    scanf_s("%lf", &inputPoint.x);
    printf("Y 값: ");
    scanf_s("%lf", &inputPoint.y);

    double radius = calculateRadius(inputPoint);              // 입력 받은 좌표로부터 R 값을 계산

    
    printf("원의 반지름 R은 %.2lf 입니다.\n", radius);       // 결과 출력

    return 0;
}
