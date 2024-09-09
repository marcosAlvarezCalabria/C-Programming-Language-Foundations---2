#include <stdio.h>
int main (void)
{
   int num_members = 0;
   int weight_team1 = 0;
   int weight_team2 = 0;
   int input_weight = 0;
   int count = 1;
   scanf("%d", &num_members);
   while (count <= num_members * 2){

    scanf("%d", &input_weight);

    if (count % 2 == 0 ){
        weight_team2 = weight_team2 + input_weight; 
        printf(" esto es weightteam2 =%d\n",weight_team2);
    } else {
        weight_team1 = weight_team1 + input_weight;
        printf(" esto es weightteam1 =%d\n", weight_team1);
    }


    count++;
   }

   if( weight_team1 > weight_team2)
   {
    printf("Team 1 has an advantage\n");   
   } else {
    printf("Team 2 has an advantage\n");
   }

   printf("Total weight for team 1: %d\n", weight_team1);
   printf("Total weight for team 2: %d\n", weight_team2);


   return 0;

}