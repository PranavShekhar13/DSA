#include<stdio.h>

#include<stdlib.h>

void Insert();
void Search();
void Display();


struct node{

	int info;
	struct node *link;
};

struct node *start =NULL;

int main(){

	int ch;

	while(1){

	printf("\nLINKED LIST OPERATIONS\n");
	printf("1.INSERT \n");
	printf("2.SEARCH\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");

	printf("Enter Your Choice \n");
	scanf("%d",&ch);
	
	switch(ch){
	
	case 1:Insert();
	break;
	
	case 2:Search();
	break;
	
	case 3:Display();
	break;
	
	case 4:exit(1);
	break;
	
	default:
	printf("Wrong Choice \n");
	
	}

    }


}



void Insert(){

	struct node *p =(struct node *)malloc(sizeof(struct node));
	
	
	printf("Enter the information \n");
	
	scanf("%d",&p->info);
	
	p->link= NULL;	

	if(start ==NULL){
			
	start =p;
	
	}
	
	else{
	p->link=start;
	start=p;
	}

}


void Search(){
 
  int e;
  printf("\nEnter the information to be searched \n");
  scanf("%d",&e);


 struct node *p=start;
 
 if(p==NULL){
 	
 	printf("The List is Empty \n");
   }
   
  else{
  
  while(p){
  
  		if(e==p->info){
  		
  		printf("Element found \n");
  		break;
  		}
  		
  		else{
  		
  		if(p->link==NULL){
  		printf("Element not Found \n");
  		
  		break;
  		}
  		
  		}
     
     p=p->link;
  	} 
  
  	
  }
  


}

void Display(){

	struct node *p=start;
	
	if(p==NULL){
	
	printf("The List is Empty \n");
	}
	
	else{
	printf("The List is \n");
	while(p){
	
	printf("%d ->",p->info);
	
	p=p->link;
	
	
	}
	
	
  }


}
