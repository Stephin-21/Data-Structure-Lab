#include <stdio.h>
void main()
{
int lim,a,b,temp,min,co=0;
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
min=a;
co++;
for(b=a+1;b<lim;b++)
{
co++;
if(ar[b]<ar[min])
{
co++;
min=b;
co++;
}
co++;
}
co++;
temp=ar[a];co++;
ar[a]=ar[min];co++;
ar[min]=temp;co++;
}
co++;

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

