#include <stdio.h>
int main()
{
    int ans;

    printf("Problem\n2 x 3 = \n");
    printf("ANS : ");
    scanf("%d",&ans);

    do
    {
        if (ans !=6)
        {
         printf("Wrong❎\n");
        }
        printf("Problem\n2 x 3 = \n");
        printf("ANS : ");
        scanf("%d",&ans);

    }
    while (ans !=6);
    
    printf("Correct✅\n");
    
    return 0;
}