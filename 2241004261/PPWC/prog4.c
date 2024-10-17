#include <stdio.h>
void main(){
/*int i=1,a=-1;
printf("%d%d%d\n",i,++i,i++);
if((a++||a++||a++))
printf("%d",a);
else
printf("nothing");*/
int a;
printf("Enter year ");
scanf("%d",&a);
if(a%4==0)
{
 if(a%100!=0 && a%400==0)
 printf("Leap Year\n");
 else
 printf("Not A leap Year\n");
}
else{
printf("Not A leap Year\n");
} 

}
