#include<stdio.h>
void main()
{
int n,i,j,a[50],temp;
printf("Enter the number of Elements\n"); scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The sorted Elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
