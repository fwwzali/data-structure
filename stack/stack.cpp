#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

struct stack
{
    int count;
    node *top;
};

typedef struct stack stack;



//definisi fungsi
stack createStack(void);
int push(int data, stack *head);
node *createNode(void);
int stackTop(stack head);
void display(stack head);


//bagian utama program
int main(void)
{
  int choice, num, success;
  stack head;
  head = createStack();

  while(1)
  {
    system("cls");
    printf("\n-----STACK MENU-----\n");
    printf("\n1. Push element");
    printf("\n2. Element in top of stack");
    printf("\n3. Display Stack");
    printf("\n4. Pop element?");
    printf("\n5. Number element of Stack ?");
    printf("\n6. Search an element ?");
    printf("\n7. Destroy Stack and EXIT ?");
    printf("\n8. Count all element of Stack ?");
    printf("\n9. is Stack empty ?");
    printf("\n9. is Stack full ??????????");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:	printf("\nElement to be pushed: "); scanf("%d",&num);
         	  success = push(num, &head);
         	  if (success == 0)
            {
         	     printf("\nstack is FULL");
               printf("\nTry again after you pop some elements");
               getch();
            }
         	  break;

    case 2:	num = stackTop(head);
    			    
				    printf("\nTop Element of Stack : %d ",num);
				    
         	  getch();
         	  break;

    case 3:	display(head);
         	  break;

    default: printf("\nInvalid Choice\n"); break;

    }//switch
  }//while
}//main



node *createNode (void)
{
   node *newPtr;
   newPtr = (node *)malloc(sizeof(newPtr));
   return(newPtr);
}


//--------------------------------------------------------CREATE STACK----------

stack createStack (void)
{
    stack head;
	  head.count = 0;
	  head.top = NULL;
	  return(head);
}


//----------------------------------------------------------------PUSH----------

int push (int data, stack *head)
{
   node *baru;int success;
   baru=(node *)malloc(sizeof(node));

   baru->data=data;
   baru->next=head->top;
   head->top=baru;
   head->count=(head->count)+1;
   success=1;
   return(success);
}



//-----------------------------------------------------------------TOP----------
int stackTop(stack head){
	int atas;
	atas=head.top->data;
    return(atas);
}

void display (stack head)
{
   system("cls");
   node *temp;
   temp = head.top;
   printf("stack element(s) from top to bottom : \n");

   printf("\n\t+---+ top");

   if(head.count==0)
   {
         printf("\n\tNULL\n");
   }
   else
   {
   	     while(temp)
   	     {
   	           printf("\n\t| %d |", temp->data);
   	           temp = temp->next;
   	     }
   }

   printf("\n\t+---+ bottom");
   getch();
}
