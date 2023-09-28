#include <stdio.h>
float cm2inch(float cm);
int main(){
    float  cm_main;
    printf("Enter cm: ");
    scanf("%f", &cm_main);
    printf("%.2f = %lf inch\n", cm_main, cm2inch(cm_main));
    return 0;
}

float cm2inch(float cm)
{
    return cm*0.393701;
}