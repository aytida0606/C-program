#include <stdio.h>
#include <stdbool.h>

int main()
{  
    bool pizzaIsHealthly ;
    int temp;

    printf("do you like pizza? ");

    scanf("%d" , &temp);

    pizzaIsHealthly = temp;

    if(pizzaIsHealthly)     
        { printf("welcome to my pizza store"); }

}