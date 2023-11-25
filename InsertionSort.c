#include <stdio.h>
void main(){
   
   int i ,j,lim, temp;
   
   printf("Enter Number of terms : \n ");
   scanf("%d",&lim);
   int a[lim];
   
   printf("Enter Elements : \n");
   for(i=0;i<lim;i++){
     scanf("%d",&a[i]);
     }
     
     printf("Array : \n");
   for(i=0;i<lim;i++){
     printf("%d ",a[i]);
     }
   for(i=1;i<lim;i++){
    j=i;
    while(a[j]<a[j-1]&&j>0){
      temp=a[j];
      a[j]=a[j-1];
      a[j-1]=temp;
      j--;
      }
    }
    
  printf("\nSorted Array : \n");
  for(int i=0;i<lim;i++){
    printf("%d ",a[i]);
    }
    printf("\n");
}
