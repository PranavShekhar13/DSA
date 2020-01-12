#include<stdio.h>
#include<stdlib.h>
#define max 50

void insert();

void delete();

void display();

int arr[max];

int front=0;
int rear=0;

int main(){
	int choice;
	
	while(1){
	printf("\nEnter 1 to insert an element in Queue");
	printf("\nEnter 2 to delete an element from Queue");
	printf("\nEnter 3 to display element from Queue");
	printf("\nEnter 4 to exit");
	
	printf("\nEnter your choice");
	scanf("%d",&choice);
	
	switch(choice){
	case 1:
		insert();
	break;

	case 2:
		delete();
	break;

	case 3:
		display();
	
	break;
	case 4:

		exit(1);
	break;

	default:
		printf("\nWrong Choice");
	
	
	}
		}

}

void insert(){

  int e;
	if(rear==max)
	{
	printf("\nQueue Overflow");
	exit(1);
	}
	else{
	
	if(front==0)
	front=1;
	
	printf("\nInsert element");
	scanf("%d",&e);
	rear=rear+1;
	arr[rear]=e;
	
	}

}

void delete(){
	if(front==0)
	{
	printf("Queue Underflow");
	exit(1);
	}
     else{
     if(front==rear)
     front=0;
     rear=0;
     
     printf("\nElement Deleted from Queue:- %d",arr[front]);
     front=front+1;
     
     }
}

void display(){


	if(front==0)
	{
	printf("\nQueue is Empty");
	}
   else{
   printf("\nQueue is:-");
   
   for(int i=front;i<=rear;i++)
   {
   printf("%d",arr[i]);
   
   printf("\n");
   }

}

}


