#include <stdio.h>
void main(){
int a,b,row,column,count,ar[10][10],k=1;
struct Sparse{
int row;
int column;
int value;
}S1[10];

printf("Enter Number of rows and columns : \n");
scanf("%d %d",&row,&column);
printf("Enter Values : \n");
for(a=0;a<row;a++){
for(b=0;b<column;b++){
scanf("%d",&ar[a][b]);
}
}


for(a=0;a<row;a++){
for(b=0;b<column;b++){
if(ar[a][b]!=0){
S1[k].row=a;
S1[k].column=b;
S1[k].value=ar[a][b];
k++;count++;
}
}
}
S1[0].row=row;
S1[0].column=column;
S1[0].value=count;
printf("Tuple representation is: \n");
printf("Row  Column  Value \n");
for(a=0;a<k;a++){
printf("%d     %d      %d  \n",S1[a].row,S1[a].column,S1[a].value);

}
}

