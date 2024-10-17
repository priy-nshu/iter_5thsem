#include<stdio.h>
void main(){
int a,b;
printf("Enter values");
scanf("%d%d",&a,&b);
switch((a>b)-(a<b)){
case -1: printf("B is bigger:%d",b);
	break;
case 1: printf("A is bigger:%d",a);
        break;
case 0:printf("Equal");
}
}
