#include <stdio.h>
int main (void) 
{
    int recipe [9];
    int numCell = 0;
    int input = 0;

    while (numCell<=9){

        scanf("%d", &recipe[numCell]);
        numCell++;
    }
    scanf("%d", &input);

    printf("%d", recipe[input]);    
    return 0;


}