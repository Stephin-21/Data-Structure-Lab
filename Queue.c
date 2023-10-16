#include <stdio.h>
int a[20],max_Size,front=0,rear=-1;
void enqueue();
void dequeue();
void display();
void peek();
void main(){

int choice;
printf("Enter Maximum Size of Queue : ");
scanf("%d",&max_Size);

while(choice!=5){
printf("Enter choice 1) EnQueue 2) DeQueue 3) Display 4) Peek 5) Exit : \n");
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
 else if(choice==4)
 {
 peek();
 }
}
}

void enqueue(){
if(rear>(max_Size-2)){
printf("Overflow \n");
}
else{
printf("Enter Element : \n");
rear++;
scanf("%d",&a[rear]);

}
}

void dequeue(){
if(rear<front){
printf("UnderFlow \n");
}
else{
printf("Removed Element : %d \n ",a[front]);
front++;
}
}

void display(){
if(rear<front){
printf("Queue is empty \n");
}
else
{
for(int i=front;i<=rear;i++){
printf("%d \n",a[i]);
}
}
}
void peek(){
if(rear<front){
printf("Queue is empty \n");
}
else
{
printf("Top element is : %d \n",a[front]);
}
}
