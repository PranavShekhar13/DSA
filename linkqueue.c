#include<stdio.h>

#include<stdlib.h>

void Enqueue();

void Dequeue();

void Display();

struct node{
	int info;
	struct node *link;
};

struct node *front= NULL;
struct node *rear= NULL;

int main(){


	while(1){
		int ch;
		
		printf("\nQueue Operations\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1: Enqueue();
			break;
			
			case 2: Dequeue();
			break;
			
			case 3: Display();
			break;
			
			case 4: exit(1);
			break;
			
			default: printf("Wrong Choice\n");
		
		}	
	}


}


void Enqueue(){
		
	struct node *p= (struct node *)malloc(sizeof(struct node));
	
	printf("Enter the information\n");
	scanf("%d",&p->info);
	p->link= NULL;
	
	if(front == NULL){
	
		front=p;
		rear=p;
	
	}
	
	else{
	
	rear->link=p;
	rear=p;
	
	}
	
  }
	
	
void Dequeue(){
	
	if(front==NULL){
		printf("Queue Underflow\n");
		exit(1);
	}
	
	else{
		
	  struct node *p= front;
	  front=front->link;
	  printf("The information Deleted = %d \n",p->info);
	  
	  free(p);
	}
	
	}
	
void Display(){
	
	struct node *p=front;
	
	
	if(p==NULL){
		printf("\nQueue is Empty \n");
	}
	
	else{
		printf("\nThe Queue is:-\n");
		while(p){
			printf("%d<--",p->info);
			p=p->link;
		
		}
	
	}
	
}


