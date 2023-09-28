#include <stdio.h>
int main()
{
    int n[5] = {3, 5, 7, 9, 11};
    float nf[5] = {0.3, 0.5, 0.7, 0.9, 0.11};
    double nd[5] = {0.33, 0.55, 0.77, 0.99, 0.111};
    char str[5] = {'A', 'B', 'C', 'D'};
    
    printf("int num is %d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);
    printf("float nf is %.1f %.1f %.1f %.1f %.2f\n",nf[0],nf[1],nf[2],nf[3],nf[4]);
    printf("double nd is %.2lf %.2lf %.2lf %.2lf %.4lf\n",nd[0],nd[1],nd[2],nd[3],nd[4]);
    printf("char str is %c %c %c %c ",str[0],str[1],str[2],str[3],str[4]);

    return 0;
}