#include <stdio.h>
int main()
{
    char name[5][100];
    int age_weight_height[5][3];
    int i;

    for (i=0; i<5; i++)
    {
        printf("Enter Name[%d] : ",i+1);
        scanf("%s",&name[i]);
        printf("Enter Age : ");
        scanf("%d",&age_weight_height[i][0]);
        printf("Enter Weight[%d] : ",i+1);
        scanf("%d",&age_weight_height[i][1]);
        printf("Enter Height[%d] : ",i+1);
        scanf("%d",&age_weight_height[i][2]);
    }
    for (i=0; i<5; i++)
    {
        printf("Name : %s\n",name[i]);
        printf("Age : %d years\n",age_weight_height[i][0]);
        printf("Weight : %d KG\n",age_weight_height[i][1]);
        printf("Height : %d CM\n",age_weight_height[i][2]);
    }
    return 0;
}