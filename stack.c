#include<stdio.h>
#include<stdlib.h>
#define max 100

int arr[max],choice,top,n;
void push();
void pop();
void display();

int main(){
top=-1;

	printf("\nEnter the size of the stack");
	scanf("%d",&n);

	while(1)
	{
	
	printf("\nEnter 1 to insert in stack");	
	printf("\nEnter 2 to delete from stack");
	printf("\nEnter 3 to display the stack");		
	printf("\nEnter 4 to exit");
	printf("\nEnter your choice");
	
	scanf("%d",&choice);
	
	switch(choice){
	
	case 1:
		push();
	break;
	
	case 2:
		pop();
	break;
	
	case 3:
		display();
	break;
	
	case 4:
		exit(1);
	}
}


}

void push(){
int x;
if(top>=n-1){
	printf("\nStack Overflow");
}
else{
top=top+1;
printf("\nEnter the value to be pushed");
scanf("%d",&x);
arr[top]=x;
}

}

void pop(){

if(top<=-1){
	printf("\nStack Underflow");
}
else{

printf("\nThe Element which is deleted=%d",arr[top]);

top=top-1;
	}
}

void display(){
	if(top>=0){
		printf("\nThe Stack is:-\n");
		for(int i=top;i>=0;i--)
		{
		printf("%d",arr[i]);
		printf("\n");
		}
	}
	else{
	printf("Stack is Empty");
	}
}
