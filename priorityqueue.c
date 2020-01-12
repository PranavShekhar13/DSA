#include<stdio.h>

#include<stdlib.h>

void Enqueue();

void Dequeue();

void Display();

struct node{
	int info;
	int priority;
	struct node *link;
};

struct node *front= NULL;

int main(){
int ch;

	while(1){
		
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
	struct node *q= NULL;
	
	printf("Enter the information\n");
	scanf("%d",&p->info);
	printf("Enter the Priority\n");
	scanf("%d",&p->priority);
	
	p->link= NULL;
	
	if(front == NULL||p->priority < front->priority){
		
		p->link=front;
		front=p;
	
	}
	
	else{
	q=front;
	
	while(q->link!=NULL && q->link->priority <= p->priority){
	
	p->link=q->link;
	q->link=p;
	   
	   }
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


