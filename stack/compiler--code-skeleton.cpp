#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//STRUCT DEFINITION
//--YOUR CODE HERE


//FUNCTIONS DEFINITIONS
//--YOUR CODE HERE

int main(void)
{
  int choice, success;
  char code[] = "function showUsername(data[]) { echo 'username: '.data['user'];} ";

  while(1)
  {
    system("cls");
    printf("\n-----COMPILER MENU-----\n");
    printf("\n1. show code");
    printf("\n2. compile code");
    printf("\n3. exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:	printf("\n\n%s",code);
    		getch();
    break; 
	
	case 2:	
		//CODE COMPILE - CHECK BRAKETS
		//--YOUR CODE HERE
    break;
	
	case 3:	
		//DESTROY AND EXIT
		//--YOUR CODE HERE
    break;	

    default: printf("\nInvalid Choice\n"); break;

    }//switch
  }//while
}//main





