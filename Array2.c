#include <stdio.h>
int main()
{
    int total,n[5] = {5,4,3,2,1};
    
    printf("n[1] : %d\n",n[1]);//n[1]=4
    printf("n[1] : %d\n",n[4]);//n[4]=1
    printf("n[n[4]] : %d\n",n[n[4]]);//n[n[4]] ดึงค่า 4 ออกมา
    total = n[1] + n[3];

    printf("n[1] + n[3] : %d\n",total);//4+2=6
    total = n[n[4]]+n[n[2]];
    printf("n[n[4]]+n[n[2]] : %d\n",total);

    return 0;
}