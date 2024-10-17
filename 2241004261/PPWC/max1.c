#include<stdio.h>
void main(){
int a[5]={2,45,1,4,5},*p[5],i,max,min;
for(i=0;i<5;i++){
p[i]=&a[i];
}
max=*p[0],min=*p[0];
for(i=1;i<5;i++){
if(*(p[i])>max)
 max=*p[i];
 if(*(p[i])<min)
 min=*p[i];
}
printf("%d\t%d\n",max,min);
}
