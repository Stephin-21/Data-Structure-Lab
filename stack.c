#include <stdio.h>
int a[20],max_Size,top=-1,item;
void push();
void pop();
void display();
void peek();
void main(){

int choice;
printf("Enter Maximum Size of Stack : ");
scanf("%d",&max_Size);

while(choice!=5){
printf("Enter choice 1) Push 2) Pop 3) Display 4) Peek 5) Exit : \n");
scanf("%d",&choice);
if(choice==1)
{
 push();
 }
 else if(choice==2)
 {
 pop();
 }
 else if(choice==3)
 {
 printf("Stack : \n");
 display();
 }
 else if(choice==4)
 {
 peek();
 }
}
}

void push(){
if(top<(max_Size-1)){
top=top+1;
printf("Enter Element : \n");
scanf("%d",&a[top]);
}
else{
printf("Overflow  \n");
}
}

void pop(){
if(top==-1){
printf("UnderFlow \n");
}
else{
item=a[top];
printf("Removed Element : %d \n",item);
top=top-1;
}
}

void display(){
int i;
if(top==-1)
{
printf("Stack is empty \n");
}
else
{
for(i=top;i>=0;i--){
printf("%d \n",a[i]);
}
}
}

void peek(){
if(top==-1){
printf("Stack is Empty \n");
}
else{
printf("Top element is : %d \n",a[top]);
}
}
