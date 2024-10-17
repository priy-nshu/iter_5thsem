#include<stdio.h>
#include<stdlib.h>
void main(){
int r1,c1,i,j;
printf("Enter dimension of Square matrix\n");
scanf("%d%d\n",&r1,&c1);
int a[r1][c1],c=0;
if(r1!=c1){
printf("Not a Square matrix\n");
exit(0);
}
printf("Enter First array\n");
    for(i=0; i<r1; i++) {
      for(j=0;j<c1;j++) {
         scanf("%d", &a[i][j]);
      }
   }
   
for(i = 0; i < r1; i++){
      for(j = 0; j < c1; j++){
         if(i== j)
            c+=a[i][j];
      }
   }
   printf("Sum :%d\n",c);
}
