#include <stdio.h>
int main (void)
{
    double train[10];
    double weight_each_waggon;
    int number_wagons;
    int i = 0;
    int j = 0; 
    double total_weight = 0;
    double good_weight = 0.0;
    scanf("%d", &number_wagons);

    while (i < number_wagons){
        scanf("%lf", &weight_each_waggon);
        train[i] = weight_each_waggon;
        total_weight = total_weight + weight_each_waggon;

        
        i++;
    }

    printf(" etso es total %lf\n", total_weight);
    good_weight = total_weight/number_wagons;
    printf(" etso es good weight %lf\n",good_weight);

    while (j < number_wagons) {
        if(train[j] > good_weight){

            train[j] =good_weight -train[j];

        } else if(train[j] < good_weight){

            train[j] = train[j] - good_weight;
            if(train[j] < 0){
                train[j] =- train[j];
            }
        }
        printf("%.1lf\n", train[j]);
        j++;
    }

    return 0;

}