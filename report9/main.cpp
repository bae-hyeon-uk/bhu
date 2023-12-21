#include <stdio.h>
#include <math.h>


typedef struct                   // ��ǥ ����ü ����
{
    double x;
    double y;
} Point;


double calculateRadius(Point point)            // ���� �������� �̿��Ͽ� R ���� ����ϴ� �Լ�
{
    return sqrt(point.x * point.x + point.y * point.y);
}

int main() {
    Point inputPoint;

    printf("���� ������ X^2 + Y^2 = R^2���� X�� Y ���� �Է��ϼ���:\n");                 // ����ڷκ��� X�� Y ���� �Է� ����
    printf("X ��: ");
    scanf_s("%lf", &inputPoint.x);
    printf("Y ��: ");
    scanf_s("%lf", &inputPoint.y);

    double radius = calculateRadius(inputPoint);              // �Է� ���� ��ǥ�κ��� R ���� ���

    
    printf("���� ������ R�� %.2lf �Դϴ�.\n", radius);       // ��� ���

    return 0;
}
