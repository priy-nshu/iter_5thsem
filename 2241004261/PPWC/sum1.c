#include<stdio.h>
void main(){
int a[5]={1,2,3,4,5},*p[5],i,s=0;
for(i=0;i<5;i++){
p[i]=&a[i];
}
for (i=0;i<5;i++){
s+=*p[i];
}
printf("%d\n",s);
}
