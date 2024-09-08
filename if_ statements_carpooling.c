#include <stdio.h>
int main(void)
{
    double gas;
    int pasengers;
    double res = 0.0;
    scanf("%d", &pasengers );
    scanf("%lf", &gas );
    if(pasengers == 0)
    {
        res = gas;
    } else {    
        pasengers = pasengers + 1;
        res = (gas + 1) / pasengers;
    }

    printf("%.2lf", res);


    return 0;

}