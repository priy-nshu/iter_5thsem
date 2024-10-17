#include<stdio.h>
void main(){
int a;
float p;
printf("Enter units\n");
scanf("%d",&a);
if(a>250){
p=(float)(50*0.5)+(100*0.75)+(100*1.20)+((a-250)*1.50);

}
else if(a<=250){
p=(float)(50*0.5)+(100*0.75)+((a-150)*1.20);
}
else if(a<=150)
p=(float)(50*0.5)+((a-50)*0.75);
else
p=(float)(a)*0.5;
p=p+(p*0.20);
printf("Bill =%f",p);
}
