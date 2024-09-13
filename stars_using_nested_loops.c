#include <stdio.h>
int main (void) 
{
    int reps;
    int col= 0;
    int rows = 0;
    char c = '*';

    scanf ("%d", &reps);
    
    while (col< reps){

        rows = 0;
        while(rows < reps){
            printf("%c", c);
            rows++;
        }
        
        printf("\n");
        col++;
    } 

    return 0;

}