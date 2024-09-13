#include <stdio.h>
int main(void)
{
    int num_words = 0;
    char word[101];
    int more_large = 0;
    int counter = 0;
    int i = 0;
    scanf("%d", &num_words);
    
     while (num_words-- > 0){
        scanf("%s", word);
        while (word[i] != '\0'){
            more_large++;
            i++;
        }
        if(counter < more_large){
            counter = more_large;
        }

     }

     printf("%d", more_large);

    return 0;
}