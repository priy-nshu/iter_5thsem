#include<stdio.h>
void main(){
int a[100],i,n,c1=0,c2=0,c3=0,c4=0,c5=0,s=0;
printf("Give the number of people rating\n");
scanf("%d",&n);
printf("Enter ratings max 5\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
s=s+a[i];
switch(a[i])
{
	case 1:c1=c1+1;
			break;
	case 2:c2=c2+1;
			break;
	case 3:c3=c3+1;
			break;
	case 4:c4=c4+1;
			break;
	case 5:c5=c5+1;
			break;
}
}
float avg=(float)s/n;
printf("Average rating is:%f\n",avg);

if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
printf("most frequent rating is: 1\n");
if(c2>c1 && c2>c3 && c2>c4 && c2>c5)
printf("most frequent rating is: 2\n");
if(c3>c2 && c3>c1 && c3>c4 && c3>c5)
printf("most frequent rating is: 3\n");
if(c4>c2 && c4>c3 && c4>c1 && c4>c5)
printf("most frequent rating is: 4\n");
if(c5>c2 && c5>c3 && c5>c4 && c1<c5)
printf("most frequent rating is: 5\n");

}
