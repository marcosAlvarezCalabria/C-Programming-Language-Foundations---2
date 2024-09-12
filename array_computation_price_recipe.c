#include <stdio.h>
int main(void)
{
    int number_ingredients = 0;
    double prices_ingredients[10];
    double price_per_pound;
    double weight_per_ingredients;
    double real_price;
    double suma = 0;
    int index = 0;

    
    scanf("%d", &number_ingredients);
    while (index < number_ingredients){

        scanf("%lf", &price_per_pound);
        prices_ingredients[index] = price_per_pound;
        index ++;

    }
    index = 0;
    while (index < number_ingredients){
        scanf("%lf", &weight_per_ingredients);
        real_price = prices_ingredients[index] * weight_per_ingredients;
        suma = suma + real_price;
        index++;
    }

     printf("%lf", suma);
    


    return 0;

}