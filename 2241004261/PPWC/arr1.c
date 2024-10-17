#include<stdio.h>
void main(){
printf("Enter size:");
int n,i;
scanf("%d",&n);
int arr[n];
printf("Enter array values:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max=min=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];
}
printf("%d %d",max,min);
}
