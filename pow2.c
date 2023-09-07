#include <stdio.h>
#include <math.h>
int main(){
    double Number = 0,Exponent = 0;
    printf("Enter Number: ");
    scanf("%lf",&Number);
    printf("Enter Exponent: ");
    scanf("%lf",&Exponent);

    do{
        printf("%.2f\n",pow(Number,Exponent));
        Exponent++;
    }while (Exponent<=2);
}