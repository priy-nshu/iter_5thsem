#include<stdio.h>
void main(){
int a,r=0;
scanf("%d",&a);
while(a>0){
r=r*10+(a%10);
a/=10;
}
printf("Reverse:%d\n",r);
}
