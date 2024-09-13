#include <stdio.h>
int main(void)
{
    char name[51];
    int num_letters = 0;
    int i = 0;
    scanf("%s", name);

    while(name[i] != '\0'){
        num_letters++;
        i++;
    }

    if(num_letters % 2 == 0){
        printf("1");
    } else {
        printf("2");
    }

    return 0;

}