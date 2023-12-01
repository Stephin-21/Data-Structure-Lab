#include <stdio.h>
 void Quicksort(int ar[],int start ,int end);
 void main(){
   int size;
   printf("Enter Size of Array : \n");
   scanf("%d",&size);
   int ar[size];
   printf("Enter The Elements of the Array :\n");
   //Inputing Values into the Array
   for(int i=0;i<size;i++){
     scanf("%d",&ar[i]);
     }
     
   Quicksort(ar,0,size-1);
   
   //Printing the sorted array
   printf("Sorted Array : \n");
   for(int i=0;i<size;i++){
     printf("%d ",ar[i]);
     }
     printf("\n");
     }

void Quicksort(int ar[],int start ,int end){
 int i,j,temp,pivot;
 if(start<end){
  i=start;
  pivot=start;
  j=end;
  while(i<j){
   while(ar[i]<=ar[pivot]&&i<end){
    i++;
    }
   while(ar[j]>ar[pivot]){
    j--;
    }
   if(i<j){
    temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
    }
    }
   temp=ar[pivot];
   ar[pivot]=ar[j];
   ar[j]=temp;
   Quicksort(ar,start,j-1);
   Quicksort(ar,j+1,end);
   }
   }
    
     
