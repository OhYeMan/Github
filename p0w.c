#include <stdio.h>
#include <math.h>

void main()
{
    double number, exponent, result;

    printf("Enter Number : ");
    scanf("%lf", &number);

    printf("Enter Exponent : ");
    scanf("%lf", &exponent);

    result = pow( number, exponent );

    printf("%.2lf ^ %.2lf = %.2lf", number, exponent, result);

}