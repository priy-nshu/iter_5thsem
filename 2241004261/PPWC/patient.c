#include<stdio.h>
void main(){
int a,i,j,d,dc,ch,s,t=0;
float total=0;
printf("Enter number of patients\n");
scanf("%d",&a);
if(a!=0){
	for(i=1;i<=a;i++){
		printf("Enter number of days stayed:\n");
		scanf("%d",&d);
		printf("Enter daily charge:\n");
		scanf("%d",&dc);
		printf("Enter additional servies:\n");
		scanf("%d",&ch);
		if(ch!=0){
		printf("Enter additional servies for patient:%d\n",i);
			
			for(j=1;j<=ch;j++){
				scanf("%d",&s);
				t=t+s;
		}
		}
		total=total+(d*dc)+t;
		printf("Total bill for patient %d is:%.2d\n",i,((d*dc)+t));
		}
	}
	printf("Total revenue for hospital is:%.2f\n",total);
}
