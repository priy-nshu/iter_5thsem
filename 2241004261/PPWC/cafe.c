#include<stdio.h>
void main(){
printf("1.Burger-$50\t2.Pizza-$100\t3.Coffee-$30\t4.Exit\n");
int total=0,a,n;
do{
printf("Enter your choice\n");
scanf("%d",&a);
switch(a){
case 1: printf("Enter number of burger\n");
		scanf("%d",&n);
		total=total+(n*50);
		break;
case 2: printf("Enter number of pizza\n");
		scanf("%d",&n);
		total=total+(n*100);
		break;
case 3: printf("Enter number of coffee\n");
		scanf("%d",&n);
		total=total+(n*30);
		break;
default:printf("Thanks For the purchase\n");
}		
}while(a<4 && a!=0);
printf("Total amount equates to:$%d\n",total);
}
