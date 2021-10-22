#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{       int maxValue = 5 ;
        srand(time(NULL));
         int randomNumber = rand() % maxValue +1 ;
         int input;
         
    printf("%d\n" ,randomNumber);

    printf("Guess a number 0 -%d :", maxValue);

    scanf("%d",&input);

    if(input ==randomNumber)
    {   printf("You Win!\n"); }
    
    else
    {  printf("You dont win! Try Again\n");  }

}