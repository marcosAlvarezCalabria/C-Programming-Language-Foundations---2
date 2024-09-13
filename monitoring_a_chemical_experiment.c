#include <stdio.h>
int main(void)
{
    int num_min = 0;
    int num_max = 0;
    int number_entered = 0;
    int numbers [10];
    int x = 0;
    int j = 0;

    scanf("%d %d", &num_min, &num_max);

    while (number_entered != -999){
        scanf("%d", &number_entered);
        if(number_entered == -999){
            break;
        }
        numbers[x] = number_entered;
        x ++;
    }
    
    while (j < x ){
        if(numbers[j] < num_min || numbers[j] > num_max){
            printf("Alert\n");
            break;
        }else{
            
            printf("Nothing to report\n");
        }
        j++;
    }
    
    

    return 0;
}