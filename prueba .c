#include <stdio.h>
int main(void){
    char word [10];
    int i = 0;
    int counter;

    scanf("%s", word);
    while(word[i] != '\0'){

        if(word[i] == word[i+1]){
            counter++;

        }
        i++;
    }
    


}