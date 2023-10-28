#include <stdio.h>
int a[20],max_Size,front=-1,rear=-1,item;
void enqueue();
void dequeue();
void display();
void main(){

int choice;
printf("Enter Maximum Size of Queue : ");
scanf("%d",&max_Size);

while(choice!=4){
printf("Enter choice 1) EnQueue 2) DeQueue 3) Display 4) Exit : \n");
scanf("%d",&choice);
if(choice==1)
{
 enqueue();
 }
 else if(choice==2)
 {
 dequeue();
 }
 else if(choice==3)
 {
 printf("Queue : \n");
 display();
 }
}
}

void enqueue(){
 if(front==-1&&rear==-1){
  front =0;
  rear=0;
  printf("Enter the element to enqueue \n");
  scanf("%d",&item);
  a[rear]=item;
 }
 else if(front==(rear+1)%max_Size){
  printf("Overflow \n");
 }
 else 
  {
  rear=(rear+1)%max_Size;
  printf("Enter the element to enqueue \n");
  scanf("%d",&item);
  a[rear]=item;
 }
 }
void dequeue(){
 if(front==-1&&rear==-1){
  printf("UnderFlow \n");
 }
 else if(front==rear){
 printf("Removed Element : %d \n ",a[front]);
  front=-1;
  rear=-1;
  
  }
 else {
  item=a[front];
  printf("Removed Element : %d \n ",item);
  front=(front+1)%max_Size;
}
}

void display(){
int i;
 if(front==-1&&rear==-1){
  printf("Queue is empty \n");
 }
 else
 {
  for(i=front;i!=rear;i=(i+1)%max_Size){
  printf("%d \n",a[i]);
 }
   printf("%d \n",a[i]);
   
 }
 }
 
