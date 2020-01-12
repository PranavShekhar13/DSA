#include<stdio.h>

#include<stdlib.h>

void Enqueue();
void Dequeue();
void Display();


struct node {
    int info;
    struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;

int main(){

    int ch;

    while(1){
        printf("\n\nQUEUE OPERATIONS\n");
        printf("1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");        
        
        
        printf("Enter Your Choice\n");
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

            default:
            printf("Wrong Choice\n");

        }

        



    }



}

void Enqueue(){

    struct node *p=(struct node *)malloc(sizeof(struct node));

    printf("Enter the information \n");
    scanf("%d",&p->info);

    p->link=NULL;

    if(front==NULL){
        front=p;
        rear=p;

    }

    else{
        rear->link=p;
        rear=p;
    }


}

void Dequeue(){

   if(front == NULL){
       printf("Queue is Empty\n");
   } 

   else{
       struct node *p =front;
       front=p->link;
       printf("The information deleted= %d",p->info);

        free(p);

   }
}

void Display(){
    struct node *p =front;

    if(p==NULL){
        printf("\n The Queue is Empty");
    }

    else{
        printf("The Queue is :-\n");
        while(p){
            printf("%d<--",p->info);
            p=p->link;
        }
    }

}