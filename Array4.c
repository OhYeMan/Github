#include <stdio.h>
int main()
{
    int i;
    char myName[100];
    float myGrade[8];

    printf("My Name is ");
    scanf("%s",&myName);

    for(i = 0; i < 8; i++)
    {
        printf("myGrade of course %d : ",i+1);
        scanf("%f",&myGrade[i]);
    }
    for (i = 0; i < 8; i++)
    {
        printf("myGrade[%d] is %.1f\n",i+1,myGrade[i]);
    }
    
return 0;

}