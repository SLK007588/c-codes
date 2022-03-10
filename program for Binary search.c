#include<stdio.h>
void main()
{
int a[20],key;
int n,i,low,high,mid,flag=0,position;
printf("Enter the value\n");
scanf("%d",&n);
printf("Enter the numbers in ascending order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the number to be searched");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
flag=1;
position=mid+1;
break;
}
else if(a[mid]<key)
low=mid+1;
else
high=mid-1;
}
if (flag==1)
printf("Number found at position %d",position); else
printf("Number not found");
}
