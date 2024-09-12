#include <stdio.h>
int main (void) 
{
    int number_of_cities = 0;
    int counter = 0;
    int population = 0;
    int index = 0;

    scanf("%d", &number_of_cities);
    while(index < number_of_cities){

        scanf("%d", &population);
        if(population > 10000){
            counter++;
        }
        index++;
    }
    printf("%d", counter);
    
    return 0;
    
}