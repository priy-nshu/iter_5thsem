#include<stdio.h>
void main(){
printf("1.Economy\n2.Standard\n3.luxury\n");
int a,b,cost;
printf("Enter Type and Days\n");
scanf("%d%d",&a,&b);
switch(a){
case 1:if(b>=7){
	cost=b*50;
	printf("Total:%d\n",cost);
	}
	else{
	cost=b*50;
	cost=cost-((cost*10)/100);
	printf("Total:%d\n",cost);
	}
	break;
case 2:if(b>=7){
	cost=b*75;
	printf("Total:%d\n",cost);
	}
	else{
	cost=b*75;
	cost=cost-((cost*10)/100);
	printf("Total:%d\n",cost);
	}
	break;
case 3:if(b>=7){
	cost=b*100;
	printf("Total:%d\n",cost);
	}
	else{
	cost=b*100;
	cost=cost-((cost*10)/100);
	printf("Total:%d\n",cost);
	}
	break;
default:printf("Invalid input\n");
} 
}
