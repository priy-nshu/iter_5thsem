#include<stdio.h>
#include<stdlib.h>
void main(){
int r1,c1,r2,c2,i,j;
printf("Enter Row 1 and Column 1\n");
scanf("%d%d\n",&r1,&c1);
printf("Enter Row 2 and Column 2\n");
scanf("%d%d\n",&r2,&c2);
int a[r1][c1],b[r2][c2];
	if(c1 != r2) {
        printf("The number of columns in Matrix-1 must be "
               "equal to the number of rows in "
               "Matrix-2\n");
 
        exit(EXIT_FAILURE);
    }
    printf("Enter First array\n");
    for(i=0; i<r1; i++) {
      for(j=0;j<r2;j++) {
         scanf("%d", &a[i][j]);
      }
   }
    printf("Enter Second array\n");
    for(i=0; i<r2; i++) {
      for(j=0;j<c2;j++) {
         scanf("%d", &b[i][j]);
      }
   }
     int r[r1][c2];
 
    printf("Resultant Matrix is:\n");
 
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            r[i][j] = 0;
 
            for (int k = 0; k < r2; k++) {
                r[i][j] += a[i][k] * b[k][j];
            }
 
            printf("%d\t", r[i][j]);
        }
 
        printf("\n");
    }
}


