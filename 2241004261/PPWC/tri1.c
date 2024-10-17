#include<stdio.h>
void main(){
printf("Enter rows");
int a,i,j,k;
scanf("%d",&a);
int b=a,c=1;
 // * sequence
for(i=0;i<a;i++){
	for(j=0;j<=i;j++){
		printf("*");
		}
		printf("\n");
	}
	//continuos no sequence
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	//diamond sequence
	for(i=1;i<=a;i++){
		for(k=1;k<=a-i;k++){
		printf(" ");
		}
			for(j=1;j<=2*i-1;j++){
				printf("*");
			}
		printf("\n");
	}
	for(i=a-1;i>=1;i--){
		for(k=1;k<=a-i;k++){
		printf(" ");
		}
			for(j=1;j<=2*i-1;j++){
				printf("*");
			}
		printf("\n");
	}
	//reverse
	for(i=b;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
	//floyed
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}
