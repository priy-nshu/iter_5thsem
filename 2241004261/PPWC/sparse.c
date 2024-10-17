#include<stdio.h>
void main(){
int r1,c1,i,j,c=0;
printf("Enter Row 1 and Column 1\n");
scanf("%d%d\n",&r1,&c1);
int a[r1][c1];
printf("Enter First array\n");
    for(i=0; i<r1; i++) {
      for(j=0;j<c1;j++) {
         scanf("%d", &a[i][j]);
      }
   }
   
for(i = 0; i < r1; i++){
      for(j = 0; j < c1; j++){
         if(a[i][j] == 0)
            c++;
      }
   }
   if(c>((r1*c1)/2)){
   printf("Sparse Matrix\n");
   }
   else{
   printf("Not Sparse Matrix\n");
   }
}
