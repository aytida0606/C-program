#include <stdio.h>
 
  int main()

  { //patients app
    printf("Enter a number between 1-4!\n");
    printf("1. Add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search the patient\n");
    printf("4. Exiting....\n");
     
     int input;
     scanf("%d",&input);

     if (input==1)
     {  printf("Add a patient\n");     }

     else if (input==2)
     { printf(" View a patient\n");   }

     else if (input==3)
     { printf(" Search the patient\n"); }

     else if (input==4)
     {    printf(" Exiting....\n");
          printf("do you want to save!\n");
          char save;
          getchar();
          scanf("%c",&save);

          if(save=='Y'|| save=='y')
          { printf("thanks for saving");  }

          else if (save=='N'|| save=='n')
          { printf("data not saved");  }
          
          else
          { printf("haha noob");  }     
     }

     else
     { printf("invalid input try again!\n"); }
      return 0;
  }