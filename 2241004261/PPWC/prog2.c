#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
int sum=a+b;
int mul=a*b;
float div=(float)a/b;
int avg=(a+b+c)/3;
printf("Sum:%d\n",sum);
printf("Multiplication:%d\n",mul);
printf("Division:%lf\n",div);
printf("Average:%d\n",avg);
}
