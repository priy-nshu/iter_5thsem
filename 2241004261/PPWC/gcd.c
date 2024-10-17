#include<stdio.h>
#include<stdlib.h>
void main(){
int a,b,r;
printf("Enter two value\n");
scanf("%d%d",&a,&b);
a=abs(a);
b=abs(b);
if(a>b){
r=b;
b=a;
a=r;
}
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
}
printf("GCD:%d\n",a);
}
