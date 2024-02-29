#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
};
struct node * front=NULL;
struct node * rear =NULL;
void add(int);
void del();
void display();
int main(){
    int item,choice;
    while (1)
    {
    
    printf("\nMENU\n");
    printf("\n1.ADD\n2.DELETE\n3.DISPLAY\n4.QUIT");
    printf("\nenter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter the item:");
        scanf("%d",&item);
        add(item);
        break;
    case 2:
     del();
     break;
    case 3:
     display();
     break;
     case 4:
     exit(0);
     break;
    
    default:
    printf("wrong input");
        break;
    }
}}
void add(int item){
    struct node * temp;
    temp = (struct node* )malloc(sizeof(struct node));
    temp->data=item;
    if(front==NULL){
        temp->next=temp;
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        temp->next=front;
        rear=temp;
    }
}
void del(){
    if(front==NULL){
        printf("Circular Queue is empty");
        return;
    }
   
        struct node * q;
        q=front;
        if(front==front->next){
            front=NULL;
        }
        else{
            front=front->next;
            rear->next=front;
        }
        free(q);
    }

void display(){
    struct node * q;
    if(front==NULL){
        printf("queue is empty");
    }
    else{
        q=front;
      do{
        printf("%d",q->data);
        q=q->next;
      }while (q!=front);
      
      
        }
    }