#include <stdio.h>
char gradeChar(float gradeFloat);
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
        gradeChar(myGrade[i]);
        printf("myGrade[course %d] is %.1f (%c)\n",i+1,myGrade[i],gradeChar(myGrade[i]));
    }
 
    return 0;
}
char gradeChar(float gradeFloat)
{

    if (gradeFloat == 4.0)
    {
        return 'A';
    }
    else if (gradeFloat == 3.0 || gradeFloat == 3.5)
    {
        return 'B';
    }
    else if (gradeFloat == 2.0 || gradeFloat == 2.5)
    {
        return 'C';
    }
    else if (gradeFloat == 1.0 || gradeFloat == 1.5)
    {
        return 'D';
    }
    else if (gradeFloat == 0.0)
    {
        return 'F';
    }
}