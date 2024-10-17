#include<stdio.h>
void main(){
printf("Enter size:");
int n,i,pos;
scanf("%d",&n);
int arr[n];
printf("Enter array values:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the position to be inserted:");
scanf("%d",&pos);
n++;
arr[n];
for(i=n-1;i>=pos;i--){
arr[i]=arr[i-1];
}
scanf("%d",&arr[pos]);
printf("New array: ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");

//deletion
printf("\nDeletion function in same array\n");
printf("Enter the position to be deleted:");
scanf("%d",&pos);
if(pos>n){
printf("Out of bound\n");}
else 
{
for(i=pos;i<n;i++){
arr[i]=arr[i+1];
}
n--;
arr[n];
printf("New array: ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
}}
