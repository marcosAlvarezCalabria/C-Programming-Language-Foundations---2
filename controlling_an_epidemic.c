#include <stdio.h>
int main (void)
{
    int population = 0;
    int peolpe_infected = 1;
    int day = 1;
    scanf("%d", &population);
    while (peolpe_infected < population ){

        day++;
        peolpe_infected = peolpe_infected *3;
        
    }
    printf("%d", day);
    

    return 0;
}