#include<stdio.h>
#include<stdlib.h>

struct node{
				int info;
				struct node *link; 				
			};
	
struct node* create(int n)
		{
			struct node * head=NULL;
			struct node * temp=NULL;
			struct node * p=NULL;
			
			for (int i = 0; i < n; i += 1)
			{
				temp=(struct node*)malloc(sizeof(struct node));
				printf("VALUE: ");
				scanf("%d",&(temp->info));
				temp->link=NULL;
				
				if(head==NULL)
						{
							head=temp;
						}
				else
				{
					p=head;
					while (p->link)
						p=p->link;
						
						p->link=temp;			
				}		
			}
			return head;
		}
		
void display(struct node * head)
	{
		struct node * p=head;
		while(p)
		{
			printf("%d->",p->info);
			p=p->link;
		}		
		printf("NULL");
	
	}		
	
struct node * rev(struct node * head)
	{
		struct node * current=head;
		struct node * next=NULL;
		struct node * previous=NULL;
		
		while(current)
			{
				next=current->link;
				current->link=previous;
				previous=current;
				current=next;
			
			}head=previous;
			
			return head;
	}				
			
void main()
	{ 
	  struct node * head;
	  head=create(5);
	  display(head);
	  head=rev(head);
	  printf("\n");
	  display(head);	
	}			
