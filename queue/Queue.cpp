#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int data;
   struct node *next;
};
typedef struct node node;


//================================================

struct queue{
	int count;
   node *front;
   node *rear;
};
typedef struct queue queue;


//===============================================

queue createQueue(void);
int enqueue(int data, queue *myQueue);
node *creatNode(void);
void dequeue(queue *myQueue);
void destroy(queue *myQueue);
void display(queue myQueue);

//===============================================

int main()
{
	int choice, num, success;
   queue myQueue;

   myQueue=createQueue();
   while(1){
   	system("cls");
    printf("\n-----QUEUE MENU-----\n");
    printf("\n1. Enqueue");
    printf("\n2. Dequeue");
    printf("\n3. Display Queue");
    printf("\n4. Exit");
      printf("\n\nEnter your choice: ");
      scanf("%d",&choice);
      printf("\n\n");
      switch(choice){
      	case 1:
         	printf("\nElement to be enqueued:");
            scanf("%d",&num);
            success=enqueue(num,&myQueue);
            if(success==0){
            	printf("operasi enqueue gagal");
               getch();
            }
            break;
         case 2:
         	dequeue(&myQueue);
            getch();
            break;
         case 3:
         	display(myQueue);
            getch();
            break;
         case 4:
         	destroy(&myQueue);
            exit(1);
         default:printf("\nInvalid Choice\n");break;
      }
   }
   
   return 0;
}

//====================================================

queue createQueue(void)
{
 queue myQueue;

 myQueue.count=0;
 myQueue.front=NULL;
 myQueue.rear=NULL;
 return(myQueue);
}

//====================================================

int enqueue(int data,queue *myQueue)
{
 int success;
 if(myQueue->count>=10) success=0;
 else
 {
  node *newPtr;
  newPtr=(node*)malloc(sizeof(node));
  newPtr->data=data;
  newPtr->next=NULL;
  	if(myQueue->front==NULL)
   	{
      myQueue->front=newPtr;
      }
   else
   	{
       myQueue->rear->next=newPtr;
      }
   myQueue->rear=newPtr;
   myQueue->count++;
   success=1;
 }return success;
}

//===============================================

node *createNode(void)
{
 node *newPtr;

 newPtr=(node *)malloc(sizeof(newPtr));
 return(newPtr);
}

//================================================

void dequeue(queue *myQueue)
{
 	 int dequeue;
	 if(myQueue->count==0) {
	 	printf("\nQueue is Empty!");
	 }
	 else
	 {
	  node *dltPtr;
	  dltPtr = myQueue->front;
	  dequeue = dltPtr->data;
	  myQueue->front=myQueue->front->next;
	  free(dltPtr);
	  myQueue->count--;
	  printf("\nElement dequeue: %d",dequeue);
	 }
}

//==============================================

void destroy(queue *myQueue)
{
 node *temp;

 while(myQueue->count!=0)
 {
  temp=myQueue->front;
  myQueue->front=myQueue->front->next;
  myQueue->count--;
  free(temp);
 }

 myQueue->count=0;
 myQueue->front=NULL;
 myQueue->rear=NULL;
}

//=============================================

void display(queue myQueue)
{
 node *temp;

 temp=myQueue.front;
 printf("elemen queue dari front ke rear:\n");
 while(temp)
 {
  printf("%4d",temp->data);
  temp=temp->next;
 }
}




