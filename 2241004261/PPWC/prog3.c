#include<stdio.h>
int main(){
int a,b,c,d,e,sum;
float p;
printf("Enter 5 subject marks\n");
scanf("%d%d%d%d%d",&a , &b, &c, &d, &e);
sum=a+b+c+d+e;
p=(float)(sum*100)/500;
printf("Sum :%d\n",sum);
printf("Percentage :%f\n",p);
return 0;
}
