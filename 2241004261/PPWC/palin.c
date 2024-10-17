#include<stdio.h>
void main(){
int a,r,t;
scanf("%d",&a);
t=a;
while(a>0){
r=r*10+(a%10);
a/=10;
}
if(r==t)
printf("Palindrom\n");
else
printf("Not a Palindrom\n");
}
