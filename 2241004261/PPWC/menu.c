#include<stdio.h>
#define pi 3.14
void main(){
printf("******MENU******\n");
printf("1.Circle\n2.Square\n3.Rectange\nEnter your choice\n");
int a ;
scanf("%d",&a);
double area,r,l;
switch(a){
case 1:{
	printf("Enter radius of the your ass:");
	scanf("%lf",&r);
	area=pi*r*r;
	printf("Area of the selected shape is :%lf\n",area);
	break;
	}
case 2: {
	printf("Enter length of the bra:");
	scanf("%lf",&r);
	area=r*r;
	printf("Area of the selected shape is :%lf\n",area);
	break;
	}
case 3:{
	printf("Enter length and breadth of the VAR:");
	scanf("%lf\n",&r);
	scanf("%lf",&l);
	area=l*r;
	printf("Area of the selected shape is :%lf\n",area);
	break;
	}
default:printf("Invalid input\n");
}
}
