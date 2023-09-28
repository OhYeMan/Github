#include <stdio.h>

float circleCal(float radius);

float rectCal(float side1, float side2);

float rectParaCal(float base, float height);

float triangleCal(float base, float height);

int main()
{
    float circleArea = circleCal(4.0);
    float rectArea = rectCal(5.0, 8.0);
    float rectArea2 = rectCal(10.0, 8.0);
    float paraArea = rectParaCal(10.0, 5.0);
    float triangleArea = triangleCal(5.0, 5.0);
    float allarea = circleArea + rectArea + rectArea2 + paraArea + triangleArea;

    printf("circleArea: %.2f\n", circleArea);
    printf("rectangleArea 1: %.2f\n", rectArea);
    printf("rectangleArea 2 : %.2f\n", rectArea2);
    printf("parallelogramArea: %.2f\n", paraArea);
    printf("squareArea: %.2f\n", triangleArea);
    printf("All Area : %.2f\n", allarea);

    return 0;
}

float circleCal(float radius)
{
    const float PI = 3.14159;
    float area = PI * (radius * radius);
    return area;
}


float rectCal(float side1, float side2)
{
    float area = side1 * side2;
    return area;
}

float rectParaCal(float base, float height)
{
    float area = base * height;
    return area;
}

float triangleCal(float base, float height)
{
    float area = 0.5 * base * height;
    return area;
}