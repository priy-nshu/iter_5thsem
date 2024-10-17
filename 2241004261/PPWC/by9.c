#include<stdio.h>
void main(){
int a,b=0;
scanf("%d",&a);
while(a>0){
printf("%d\n",(a%10));
b=b+(a%10);
a/=10;
}
if(b%9==0)
printf("Div by 9\n");
else
printf("Not Div\n");
}

