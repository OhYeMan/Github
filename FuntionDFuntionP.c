#include <stdio.h>

float circleCal(float radius);

float rectCal(float side1, float side2);

float rectParaCal(float base, float height);

float triangleCal(float base, float height);

int main()
{
    float radius = 5.0;
    float side1 = 4.0;
    float side2 = 6.0;
    float base = 8.0;
    float height = 10.0;

    float circleArea = circleCal(radius);
    float rectangleArea = rectCal(side1, side2);
    float parallelogramArea = rectParaCal(base, height);
    float squareArea = triangleCal(base, height);

    printf("circleArea: %.2f\n", circleArea);
    printf("rectangleArea: %.2f\n", rectangleArea);
    printf("parallelogramArea: %.2f\n", parallelogramArea);
    printf("squareArea: %.2f\n", squareArea);

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