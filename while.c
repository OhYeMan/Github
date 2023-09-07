#include <stdio.h>

void main()
{
    int b = 0, i = 1;
    printf("สูตรคูณ : ");
    scanf("%d", &b);     
    while( i<=12 ) {
        printf("%d x %d = %d\n", b, i, (b*i));
        i++;
    }
}