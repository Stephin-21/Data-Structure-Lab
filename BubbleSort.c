#include <stdio.h>
void main()
{
int lim,a,b,temp,co=0;
co=co++;
printf("Enter the limit: \n");
scanf("%d",&lim); co++;
int ar[lim];
printf("Enter the numbers: \n");
for(a=0;a<lim;a++)
{
co++;
scanf("%d",&ar[a]);
co++;
}co++;
for(a=0;a<lim-1;a++)
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
printf("Sorted Array \n ");
for(a=0;a<lim;a++)
{
co++;
printf("%d ",ar[a]);
co++;
}co++;
printf("\n");
printf("Space Complexity is %d \n",20+(4*lim)); co++;
co++;
printf("Time Complexity  is %d \n",co);
}
