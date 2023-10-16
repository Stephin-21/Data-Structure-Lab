#include <stdio.h>
void main()
{
int lim,a,check,c=0,co=0;
co=co+2;
printf("Enter the limit: \n");
scanf("%d",&lim); co++;
int ar[lim];
printf("Enter the numbers: \n");
for(a=0;a<lim;a++)
{
co++;
 scanf("%d",&ar[a]); co++;
 }
 co++;
 
 printf("Enter number to be searched  :\n");
 scanf("%d",&check); co++;
 for(a=0;a<lim;a++)
 {
  co++;
  if(ar[a]==check)
  {
   co++;
   printf("%d is present in the array \n",check); co++;
   c=1; co++;
   break;
   }
    }co++;
   if(c==0)
   { 
   co++;
    printf("%d is not present in array \n",check); co++;
    } 
    printf("Space Complexity is %d \n",5*4+4*lim); 
    co++;co++;
    printf("Time Complexity  is %d \n",co);
    }

