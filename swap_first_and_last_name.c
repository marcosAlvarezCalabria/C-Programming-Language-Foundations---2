#include <stdio.h>
int main (void)
{
    
    char name[101];
    char surname[101];
    int number_names = 0;

    scanf("%d", &number_names);

    while(number_names-- > 0){//number_names-- nos sirve pare ir reduciendo 

        scanf("%s %s", name, surname);
        printf("%s %s\n", surname, name);
    }
    
    return 0;
}