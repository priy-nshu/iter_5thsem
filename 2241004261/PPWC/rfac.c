#include<stdio.h>
void main(){
int i=1,f=1,n,c=0;
scanf("%d",&n);
for(;f<n;i++){
f=f*i;
if(f>n)
{
c=1;
break;
}
}
if(c!=1)
printf("this the Factorial of:%d\n",--i);
else
printf("Not a factorial\n");
}
