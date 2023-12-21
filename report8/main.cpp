#include <stdio.h>
#include <math.h>


typedef struct                                       // 2차원 벡터 구조체 정의
{       
    double x;
    double y;
} Vector;


typedef struct                                      // 점 구조체 정의
{
    double x;
    double y;
} Point;


typedef struct                                     // 직선 구조체 정의
{
    double a; // x 계수
    double b; // y 계수
    double c; // 상수
} Line;


double calculateDistance(Point p1, Point p2)         // 두 점 간의 거리 계산 함수
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


double calculateVectorMagnitude(Vector v)             // 벡터의 크기 계산 함수
{            
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}


double calculateDotProduct(Vector v1, Vector v2)                   // 두 벡터의 내적 계산 함수
{
    return v1.x * v2.x + v1.y * v2.y;
}


Vector calculateVector(Point p1, Point p2)                      // 두 점 간의 벡터 계산 함수
{
    Vector v;
    v.x = p2.x - p1.x;
    v.y = p2.y - p1.y;
    return v;
}


double calculateShortestDistance(Point point, Line line)                 // 점과 직선 간의 최단 거리 계산 함수
{
    Vector lineVector = { line.a, line.b }; // 직선의 법선 벡터
    Vector pointVector = { point.x, point.y }; // 점의 벡터

    double distance = fabs(calculateDotProduct(lineVector, pointVector) + line.c) /
        calculateVectorMagnitude(lineVector);

    return distance;
}

int main() 
{
     Line line = { 3, -4, -3 };       // 주어진 직선의 방정식

      Point point = { -5, 3 };      // 주어진 점

    
    double shortestDistance = calculateShortestDistance(point, line);    // 최단 거리 계산

    
    printf("주어진 점과 직선 사이의 최단 거리: %.2lf\n", shortestDistance);     // 결과 출력

    return 0;
}
