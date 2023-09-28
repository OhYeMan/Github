#include <stdio.h>
float rentCal(int rent,float waterUnit, float elecUnit);
int main()
{
    int rent;
    float waterUnit, elecUnit;
    printf("Enter rent: ");
    scanf("%d",&rent);
    printf("Enter waterUnit: ");
    scanf("%f",&waterUnit);
    printf("Enter elecUnit: ");
    scanf("%f",&elecUnit);
    printf("Total : %.2f ฿",rentCal(rent,waterUnit,elecUnit));

    return 0;
}
float rentCal(int rent,float waterUnit,float elecUnit)
{
    int waterUnit_price = 15,elecUnit_price =10;
    return rent+(waterUnit*waterUnit_price)+(elecUnit*elecUnit_price);
}