//Linked List

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
	
	
struct node* start_in(struct node* head)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));

		printf("\nNEW VALUE:");
		scanf("%d",&(temp->info));
		temp->link=NULL;
		
		if(head==NULL)
			head=temp;
			
		else
		{
			temp->link=head;
			head=temp;	
		}
		return head;
	}	


struct node* pos_in(struct node* head)
	{	int pos,n=1;
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		struct node* p=head;

		printf("\nNEW VALUE:");
		scanf("%d",&(temp->info));
		ch_men:
		printf("\nPOSITION: ");
		scanf("%d",&pos);
		temp->link=NULL;
		
		
		if(head==NULL)
			head=temp;
			
		else
		{
			p=head;
			for (int i= 1; i< pos-1; i+= 1)
			{
				p=p->link;
				if(p->link==NULL)
					{printf("OUT OF BOUND");
						goto ch_men;
						
					}
			}
			
			temp->link=p->link;
			p->link=temp;
			}
		return head;
	}	


struct node* end_in(struct node* head)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		struct node* p=head;
		
		printf("\nNEW VALUE:");
		scanf("%d",&(temp->info));
		temp->link=NULL;
			
		if(head==NULL)
			head=temp;
			
		else
		{
			p=head;
			while(p->link)
				p=p->link;
				
			p->link=temp;	
		}
		return head;
	}	


struct node* start_del(struct node* head)
	{
		int a=head->info;
		struct node* p=head;
		if(head==NULL)
			printf("EMPTY LINKED LIST");
			
		else
		{
			head=head->link;
			free(p);
			printf("DELETED VALUE: %d",a);
		}
		return head;
	}	

struct node* end_del(struct node* head)
	{	
		int a;
		struct node* p1=NULL;
		struct node* p2=NULL;
					
		if(head==NULL)
			printf("EMPTY LINKED LIST");
			
		else if(p1->link==NULL)
		{
			head=start_del(head);
		}	
		else
		{
			p2=head;

			while(p2->link->link)
				p2=p2->link;
			
				p1=p2->link;
				a=p1->info;
							
			p2->link=NULL;
			printf("DELETED VALUE: %d",a);	
			free(p1);	
		}
		return head;
	}	

struct node* pos_del(struct node* head)
	{	
		int a,pos;
		struct node* p1=NULL;
		struct node* p2=NULL;
		pos_men:		
		printf("INPUT THE POSITION: ");
		scanf("%d",&pos);
						
		if(head==NULL)
			printf("EMPTY LINKED LIST");
			
		else
		{
			p2=head;
			for (int i = 1; i <pos-1; i += 1)
			{
				p2=p2->link;
				if(p2->link==NULL)
					{printf("OUT OF BOUND");
						goto pos_men;
					}		
			}

			p1=p2->link;			
			a=p1->info;
			
			p2->link=p1->link;
	
			printf("DELETED VALUE: %d",a);	
			free(p1);	
		}
		return head;
	}	



void main()
	{
		int c1,c2=0,c3,a;
		struct node *head=NULL;
		
		menu:
		system("clear");
		printf("\nINPUT :\n");
		printf("1)CREATE A LINKED LIST \n");
		printf("2)VIEW LINKED LIST \n");
		printf("3)INSERT AN ELEMENT IN LINKED LIST \n");
		printf("4)DELETE AN ELEMENT FROM LINKED LIST \n");				
				
		printf("CHOICE: ");
		scanf("%d",&c1);
		
		switch(c1)
		{
			case 1:	printf("\nSIZE: ");
					scanf("%d",&a);
					head=create(a);
					printf("\nPress 1 to go to MAIN MENU: ");
					scanf("%d",&c2);			
					if(c2==1)	goto menu;
					break;
			
			case 2: display(head);		
					printf("\nPress 1 to go to MAIN MENU: ");
					scanf("%d",&c2);			
					if(c2==1)	goto menu;
					break;
					
			case 3: system("clear");
					in_men:
					printf("\nINPUT :\n");
					printf("1)INSERT IN START \n");
					printf("2)INSERT AT SPECIFIC POSITION \n");
					printf("3)INSERT AT THE END \n");
				
					printf("CHOICE: ");
					scanf("%d",&c3);
					switch(c3)
						{
							case 1: head=start_in(head);
									break;
							
							case 2: head=pos_in(head);
									break;
							
							case 3: head=end_in(head);
									break;
							
							default:printf("\t\t\nInvalid Input\n"); 
									goto in_men;
						}
					printf("\nPress 1 to go to MAIN MENU: ");
					scanf("%d",&c2);			
					if(c2==1)	goto menu;
					break;

			case 4: system("clear");
					del_men:
					printf("\nINPUT :\n");
					printf("1)DELETE FIRST ELEMENT \n");
					printf("2)DELETE AT SPECIFIC POSITION ELEMENT \n");
					printf("3)DELETE LAST ELEMENT\n");
				
					printf("CHOICE: ");
					scanf("%d",&c3);
					switch(c3)
						{
							case 1: head=start_del(head);
									break;
							
							case 2: head=pos_del(head);
									break;
							
							case 3: head=end_del(head);
									break;
							
							default:printf("\t\t\nInvalid Input\n"); 
									goto del_men;
						}
					printf("\nPress 1 to go to MAIN MENU: ");
					scanf("%d",&c2);			
					if(c2==1)	goto menu;

				    break;		
		}
		
		
	}
