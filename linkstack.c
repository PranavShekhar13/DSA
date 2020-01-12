#include<stdio.h>

#include<stdlib.h>

void PUSH();

void POP();

void Display();

struct node{
	int info;
	struct node *link;
};

struct node *top= NULL;

int main(){
int ch;

	while(1){
		
		printf("\nStack Operations\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1: PUSH();
			break;
			
			case 2: POP();
			break;
			
			case 3: Display();
			break;
			
			case 4: exit(1);
			break;
			
			default: printf("Wrong Choice\n");
		
		}	
	}


}


void PUSH(){
		
	struct node *p= (struct node *)malloc(sizeof(struct node));
	
	printf("Enter the information\n");
	scanf("%d",&p->info);
	p->link= NULL;
	
	if(top == NULL){
	
		top=p;
	
	}
	
	else{
	
	p->link=top;
	top=p;
	
	}
	
  }
	
	
void POP(){
	
	if(top==NULL){
		printf("Stack Underflow\n");
		exit(1);
	}
	
	else{
		
	  struct node *p= top;
	  top=top->link;
	  printf("The information Deleted = %d \n",p->info);
	  
	  free(p);
	}
	
	}
	
void Display(){
	
	struct node *p=top;
	
	
	if(p==NULL){
		printf("\nStack is Empty \n");
	}
	
	else{
		printf("\nThe Stack is:-\n");
		while(p){
			printf("%d \n",p->info);
			p=p->link;
		
		}
	
	}
	
}


