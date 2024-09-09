#include <stdio.h>
int main (void)
{   
    int num_hours_after_12 = 0;
    int base_price = 10;
    int dollars_add ;
    int total_price;

    scanf("%d", &num_hours_after_12);
    dollars_add = 5 * num_hours_after_12;
    total_price = base_price + dollars_add;

    if(total_price > 53)
    {
        printf("%d", 53);
    }else {
       printf("%d", total_price); 
    }
    


    return 0;
}