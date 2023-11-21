#include <stdio.h>
void main(){

    int lim,pos,parent,lc,rc;
    printf("Enter Limit :\n");
    scanf("%d",&lim);
    int ar[lim];
    printf("Enter The Elements \n");
    for(int i=1;i<=lim;i++){
       scanf("%d",&ar[i]);
       }
    
    printf("Enter Position  :\n");
    scanf("%d",&pos);
    
    //Finding Parent
    parent=pos/2;
    if(parent<1){
      printf("No Parent  \n");
    }
    else{
      printf("Parent : %d \n",ar[parent]);
    }
    
    //Finding Left Child
    lc=2*pos;
    if(lc>lim){
       printf("No Left Child is Present \n");
     }
    else{
      printf("Left Child : %d \n",ar[lc]);
      }
      
     //Finding Right Child
     rc=(2*pos)+1;
     if(rc>lim){
       printf("No Right Child is Present \n");
      }
      else{
      printf("Right Child : %d \n",ar[rc]);
      }
    }
    
       

