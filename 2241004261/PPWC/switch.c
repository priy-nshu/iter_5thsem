#include<stdio.h>
void main(){
int i=2,j;
switch(i){
case 2:i=i*i;
case 4:i=i*i;
default :i=i*i;
	break;
case 16:i=i*i;
}
j=i;
printf("%d",j);
}
