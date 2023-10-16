#include <stdio.h>
void main(){
int lim,a;
printf("Enter Number of terms of Polynomial : \n");
scanf("%d",&lim);
struct polynomial{
int coeff;
int exp;
}S[lim];
for(a=0;a<lim;a++){
printf("Enter coeff and exponent of polynomial:\n");
scanf("%d %d",&S[a].coeff,&S[a].exp);
}
for(a=0;a<lim;a++){
if(a<lim-1){
printf("%dX^%d + ",S[a].coeff,S[a].exp);
}
else{
printf("%dX^%d \n",S[a].coeff,S[a].exp);
}
}
}

