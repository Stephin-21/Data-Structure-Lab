#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*head;
void insertion_at_front();
void Insertion_at_end();
void insertion_at_any_position();
void deletion_at_front();
void deletion_at_end();
void deletion_at_any_position();
void display();
void main()
{
int ch;

  printf("enter the choice  1)insert at front  2)insert at end  3)insert at any position  4)delete at front  5)delete at end  6)delete at any position   7)display  8)exit\n");
do{

  scanf("%d",&ch);
  switch(ch){
    case 1:{
    insertion_at_front();
    break;
    }
    case 2:{
    Insertion_at_end();
    break;
    }
    case 3:{
    insertion_at_any_position();
    break;
    }
    case 4:{
    deletion_at_front();
    break;
    }
    case 5:{
    deletion_at_end();
    break;
    }
    case 6:{
    deletion_at_any_position();
    break;
    }
    case 7:{
    display();
    break;
    }
    case 8:
    break;
    default:
    printf("invalid choice\n");
    
    }
     printf("enter the choice : \n");
    }
    while(ch!=8);
    }
void insertion_at_front(){
   int item;
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter Data : \n");
   scanf("%d",&item);
   if(temp==NULL)
   printf("No memory space\n");
   else{
   temp->data=item;
   temp->link=head;
   head=temp;
   }
   }
void Insertion_at_end(){
   int item;
   struct node *temp,*ptr;
   if(head==NULL){
      insertion_at_front();
   }
   else{
   printf("Enter data : \n");
   scanf("%d",&item);
   temp=(struct node*)malloc(sizeof(struct node));
   ptr=head;
   while(ptr->link!=NULL){
   ptr=ptr->link;
   }
   ptr->link=temp;
   temp->data=item;
   temp->link=NULL;
   }
}
void insertion_at_any_position(){
   int item,key;
   struct node *temp,*ptr;
   if(head==NULL){
      insertion_at_front();
   }
   else{
   printf("Enter Data\n");
   scanf("%d",&item);
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter the Element after which value to added\n");
   scanf("%d",&key);
   ptr=head;
   while(ptr->data!=key&&ptr->link!=NULL){
   ptr=ptr->link;
   }
   if(ptr->link==NULL){
      temp->data=item;
      temp->link=NULL;
      ptr->link=temp;
  }
   else{
   temp->data=item;
   temp->link=ptr->link;
   ptr->link=temp;
   }
   }
}
void deletion_at_front(){
   struct node *ptr;
   if(head==NULL)
   printf("no elements\n");
   else{
   ptr=head;
   head=ptr->link;
   printf("the Element %d is deleted\n",ptr->data);
   free(ptr);
   }
   }
void deletion_at_end(){
    struct node *temp,*ptr;
    if(head==NULL){
      printf("no elements\n");
    }
    else if(head->link==NULL){
    ptr=head;
    head=NULL;
    printf("the Element %d is deleted\n",ptr->data);
    free(ptr);
    }
    else {
    ptr=head;
    temp=head->link;
     while(temp->link!=NULL){
       ptr=temp;
       temp=temp->link;
   }
   ptr->link=NULL;
    printf("the Element %d is deleted\n",temp->data);
    free(temp);
   }
}
void  deletion_at_any_position(){
   struct node *ptr,*temp;
   int key;
   if(head==NULL){
   printf("no elements\n");
   }
   else if(head->link==NULL){
      deletion_at_front();
      head==NULL;
   }
   else{
    printf("enter the data to delete\n");
   scanf("%d",&key);
   temp=head;
   ptr=temp->link;
   while(ptr->data!=key&&ptr->link!=NULL){
   temp=ptr;
   ptr=ptr->link;
   }
   if(ptr->data!=key&&ptr->link!=NULL){
      printf("search fails\n");
   }
   else{
   temp->link=ptr->link;
   printf("the data %d is deleted\n",ptr->data);
   free(ptr);
   }
}
}
void display(){
   struct node *ptr;
   ptr=head;
   if(head==NULL){
      printf("no elements\n");
   }
   else{
   printf("linked list:");
   while(ptr!=NULL)
   {
   printf("%d  ",ptr->data);
   ptr=ptr->link;
   }
   printf("\n");
   }
}
   
    
    
    
    
