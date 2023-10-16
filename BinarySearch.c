#include <stdio.h>
void main()
{
 int lim,a,check,temp,r=lim-1,l=0,m,b=0,c=0,co=0;
 co=co+5;

 printf("Enter the limit: \n");
scanf("%d",&lim); co++;
int ar[lim];
 m=(r+l)/2; co++;
printf("Enter the numbers: \n");
for(a=0;a<lim;a++)
{
co++;
 scanf("%d",&ar[a]);
 } co++;
 
 for(a=0;a<lim;a++)
 {
 co++;
  for(b=a;b<lim;b++)
  {
  co++;
  if(ar[a]>ar[b])
  {
  co++;
   temp=ar[a];co++;
   ar[a]=ar[b];co++;
   ar[b]=temp;co++;
   }co++;
   }co++;
   }co++;
   
 printf("Enter number to be searched  :\n");
 scanf("%d",&check); co++;
 
for(a=0;a<lim;a++)
 {
  co++;
   if(ar[m]==check)
   { co++;
    printf("%d is present in array \n",check); co++;
    c=1; co++;
    break;
    }
    else if(check<ar[m])
    {
      co++;
      r=m-1; co++;
      m=(l+r)/2; co++;
      }
     else if(check>ar[m])
     {
      co++;
      l=m+1;
      r=lim-1; 
      m=(l+r)/2;
      }
      }
      
      if(c==0)
      {
       co++;
       printf("%d is not present in array \n",check);co++;
      }

      
      printf("Space Complexity is %d \n",10*4+4*lim); co++;
    co++;
    printf("Time Complexity  is %d \n",co);
      
      
      }
      
      
      
