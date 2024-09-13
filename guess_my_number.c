#include <stdio.h>
int main(void)
{
    int number = 0;
    int tries = 1;
    int number_entered = 0;
    scanf("%d", &number);

    while (number_entered != number){

        scanf("%d", &number_entered);
        if(number_entered > number){
            printf("it is less\n");
        }else if (number_entered < number){
            printf("it is more\n");
        }else {
            break;
        }
        tries++;

    }
    printf("Number of tries needed:\n %d", tries);
    


    return 0;
}