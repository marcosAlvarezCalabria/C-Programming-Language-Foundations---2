#include <stdio.h>
int main (void) 
{
    int age = 0;
    int weight_luggage = 0;
    int price = 30;
    
    scanf("%d", &age);
    scanf("%d", &weight_luggage);

    if (age == 60){

        price = 0;
    } else if (age < 10)
    {
        price = 5;
    }else if (weight_luggage > 20) {
        price = price + 10;


    }

    printf("%d", price);
    
    
    return 0;


}