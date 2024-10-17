#include<stdio.h>
void main(){
printf("Enter the length of the triangle");
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if(a<b+c && b<a+c && c<b+a){
printf("Triangle is possible ");
if(a==b && b==c)
	printf("It is an eqilateral");
else if(a!=b && b!=c && c!=a)
	printf("It is a scalene");
else 
	printf("Isosceles"); 
}
else{
printf("Not possible");
}
}
