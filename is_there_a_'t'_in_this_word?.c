#include <stdio.h>
int main(void)
{
    char word[51];
    int lenght = 0;
    int index = 0;
    int middle = 0;
    scanf("%s", word);
    while (word[lenght] != '\0') {
        lenght++;
    }
    while(index < lenght){
        if(word[index] != 't' && word[index] != 'T'){
          index++;  
        }else {
            break;
        }
        

    }

    //printf("esto es el index %d\n" ,index);
    //printf("esto es el leght %d\n" ,lenght);
    middle = lenght / 2;
//printf("esto es el middle %d\n" ,middle);
    if(index == lenght){
        printf("-1");
    }else if(index > middle){
        printf("2");
    }else {
        printf("1");
    }
    

    return 0;
}