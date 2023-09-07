#include <stdio.h>
int main(){
    int score = 0;

    while(1){
    printf("2x3 = ");
    scanf("%d",&score);

    if(score == 6){
        printf("Correct✅\n");
        break;
    }else
        printf("Wrong❎\n");
    }
    return 0;
}