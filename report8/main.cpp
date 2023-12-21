#include <stdio.h>
#include <math.h>


typedef struct                                       // 2���� ���� ����ü ����
{       
    double x;
    double y;
} Vector;


typedef struct                                      // �� ����ü ����
{
    double x;
    double y;
} Point;


typedef struct                                     // ���� ����ü ����
{
    double a; // x ���
    double b; // y ���
    double c; // ���
} Line;


double calculateDistance(Point p1, Point p2)         // �� �� ���� �Ÿ� ��� �Լ�
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


double calculateVectorMagnitude(Vector v)             // ������ ũ�� ��� �Լ�
{            
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}


double calculateDotProduct(Vector v1, Vector v2)                   // �� ������ ���� ��� �Լ�
{
    return v1.x * v2.x + v1.y * v2.y;
}


Vector calculateVector(Point p1, Point p2)                      // �� �� ���� ���� ��� �Լ�
{
    Vector v;
    v.x = p2.x - p1.x;
    v.y = p2.y - p1.y;
    return v;
}


double calculateShortestDistance(Point point, Line line)                 // ���� ���� ���� �ִ� �Ÿ� ��� �Լ�
{
    Vector lineVector = { line.a, line.b }; // ������ ���� ����
    Vector pointVector = { point.x, point.y }; // ���� ����

    double distance = fabs(calculateDotProduct(lineVector, pointVector) + line.c) /
        calculateVectorMagnitude(lineVector);

    return distance;
}

int main() 
{
     Line line = { 3, -4, -3 };       // �־��� ������ ������

      Point point = { -5, 3 };      // �־��� ��

    
    double shortestDistance = calculateShortestDistance(point, line);    // �ִ� �Ÿ� ���

    
    printf("�־��� ���� ���� ������ �ִ� �Ÿ�: %.2lf\n", shortestDistance);     // ��� ���

    return 0;
}
