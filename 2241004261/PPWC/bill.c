#include<stdio.h>
void main(){
printf("Enter your Talk min and Data Usage a\n");
double t,d;
scanf("%lf%lf",&t,&d);
if((t<=100 && d<=1) )
	printf("Go with Plan A:$30 for 100 min and 1GB\n");
else if((t<=300 && d<=5))
	printf("Go with Plan B:$50 for 300 min and 5GB\n");
else if(d<=10)
	printf("Go with Plan C:$70 for unlimited min and 10GB\n");
else 
	printf("We don't have a plan for u\n");
}
