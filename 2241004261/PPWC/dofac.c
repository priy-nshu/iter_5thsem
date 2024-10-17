#include<stdio.h>
void main(){
int a,n;
printf("1.Factorial\t2.Prime\t3.Odd\t4.Exit\n");
do{
printf("Enter choice\n");
scanf("%d",&a);
switch(a){
case 1: int f=1;
		printf("Enter the number\n");
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
		f=f*i;
		}
		printf("Factorial=%d\n",f);
		break;
case 2: int c=0;
		printf("Enter the number\n");
		scanf("%d",&n);
		for(int i=2;i<=n/2;i++){
		if (n%i==0)
			c++;
		}
		if(c==0)
		 printf("Prime Number\n");
		else
			printf("Not a prime\n");
		break;
case 3:
		printf("Enter the number\n");
		scanf("%d",&n);
		if(n%2==0)
			printf("Even\n");
		else
			printf("Odd\n");
		break;
default :printf("BYE\n");
}
}while(a<4);
}
