#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,d,r1,r2;
printf("Enter values\n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);

/*if(d>0){
r1=(-b+(sqrt(d)))/(a*2);
r2=(-b-(sqrt(d)))/(a*2);
printf("root is:%f\n",r1);
printf("root is:%f\n",r2);
}

else if(d==0){
r1=-b/(2*a);
printf("root is:%f\n",r1);
}

else{
r1=(-b/2*a)+(sqrt(-d))/(a*2);
r2=(-b/2*a)-(sqrt(-d))/(a*2);
printf("root is:%f",r1);
printf("i\n");
printf("root is:%f",r2);
printf("i\n");
}*/

switch(d>0){
case 1:
r1=(-b+(sqrt(d)))/(a*2);
r2=(-b-(sqrt(d)))/(a*2);
printf("root is:%f\n",r1);
printf("root is:%f\n",r2);

case 0: switch(d==0){
case 1:
r1=-b/(2*a);
printf("root is:%f\n",r1);

case 0:
r1=(-b/2*a)+(sqrt(-d))/(a*2);
r2=(-b/2*a)-(sqrt(-d))/(a*2);
printf("root is:%f",r1);
printf("i\n");
printf("root is:%f",r2);
printf("i\n");
}
}
}

