#include <stdio.h>
int main (void) 
{
    int reps = 0;
    char word[100];
    int x = 0;
    int j = 0;
    scanf("%d %s", &reps, word);

    while(x < reps){

            printf("%s\n", word);
            
        x++;
    }

    return 0;

}