#include<stdio.h>
void main(){
int a,sum;
scanf("%d",&a);
while(a>0){
sum+=(a%10);
a/=10;
}
printf("Sum :%d",sum);
}
