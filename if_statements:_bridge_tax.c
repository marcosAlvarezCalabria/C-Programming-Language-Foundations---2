#include <stdio.h>
int main (void)
{
    int num1 = 0;
    int num2 = 0;
    int special_tax = 36;
    int regular_tax;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 + num2 >= 10){
        printf("Special tax\n");
        printf("%d", special_tax);
    } else {
        regular_tax = (num1 + num2) * 2;
        printf("Regular tax\n");
        printf("%d", regular_tax);
    }
    
    
    return 0;

}