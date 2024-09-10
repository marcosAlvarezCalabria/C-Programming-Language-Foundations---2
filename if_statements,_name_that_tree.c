#include <stdio.h>
int main (void)
{
    int height = 0;
    int number_of_leaflets = 0;

    scanf("%d", &height);
    scanf("%d", &number_of_leaflets);

    if(height < 5 && number_of_leaflets > 8){
        printf("Tinuviel");
    } else if (height >= 8 && number_of_leaflets < 5){
        printf("Falarion");

    }else if (height >= 10 && number_of_leaflets > 10){
        printf("Calaelen");
    }else if (height >= 12 && number_of_leaflets < 7){
        printf("Dorthonion");
    }else{
        printf("Uncertain");
    }

    return 0;
}