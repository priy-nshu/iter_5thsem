#include<stdio.h>
#include<math.h>
void main(){
int a,s=0,b,t,n=0;
scanf("%d",&a);
t=a;
while(a>0){
n++;
a/=10;
}
a=t;
while(a>0){
b=a%10;
s=s+(pow(b,n));
a/=10;
}
if(s==t)
printf("Armstrong\n");
else
printf("Not a Armstrong\n");
}
