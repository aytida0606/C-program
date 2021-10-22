#include <stdio.h>

int main ()
{ int slices ;
    printf("enter number of slices of pizza you want to eat!\n");

    scanf("%d",&slices);

    switch(slices)
    {   case 1:
            printf("you ate 1 slice of pizza\n");
            break;
        case 2:
            printf("you ate 2 slice of pizza, one slice is remaining\n");
            break;
        case 3:
            printf("you ate 3 slice of pizza , zero slices are remaining.\n");
            break;        
        case 4:
            printf("you ate 4 slice of pizza , you ate extra 1 slice\n");       
            break;
        default:
            printf("enjoy your delicious pizza!\n");
            break;

    }

   return 0;
}
