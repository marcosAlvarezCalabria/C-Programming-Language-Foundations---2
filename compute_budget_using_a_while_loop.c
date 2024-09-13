#include <stdio.h>
int main (void) 
{
    int input = 0;
    int suma = 0;
    while (input != -1)
    {
        scanf("%d", &input);
        if (input != -1){
            suma = suma + input;
        } else {
            suma = suma;
        }
        

    }
    printf("%d", suma);

    return 0;

}