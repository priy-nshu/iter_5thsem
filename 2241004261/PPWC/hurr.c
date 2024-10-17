#include<stdio.h>
void main(){
printf("Enter speed ");
float a;
scanf("%f",&a);
if(a<25){
printf("Not a Strong wind\n");
}
else if(a>24 && a<39){
printf("strong wind\n");
}
else if(a>38 && a<55){
printf("gale\n");
}
else if(a>54 && a<73){
printf("whole gale\n");
}
else{
printf("hurricane\n");
}
}

