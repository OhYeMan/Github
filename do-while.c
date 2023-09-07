#include <stdio.h>
int main()
{
    int i=1,m,j;
    printf("Enter my mul : ");
    scanf("%d",&m);
    printf("Enter round : ");
    scanf("%d",&j);
    do
    {
        printf("%d*%d=%d\n",m,i,m*i);
        i++;
    } 
    while (i <= j);
}