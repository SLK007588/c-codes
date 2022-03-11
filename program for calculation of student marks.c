#include <stdio.h>
struct student
{
char usn[50];
char name[50];
int marks;
} s[10];
 main()
{
int i,n,countav=0,countbv=0;
float sum,average;
printf("Enter number of Students\n");
scanf("%d",&n);
printf("Enter information of students:\n");
for(i=0; i<n;i++)
{
printf("Enter USN: ");
scanf("%s",s[i].usn);
printf("Enter name: ");
scanf("%s",s[i].name);
printf("Enter marks: ");
scanf("%d",&s[i].marks);
printf("\n");
}
for(i=0;i<n;i++)
{
sum=sum+s[i].marks;
}
average=sum/n;
printf("\nAverage marks: %f\n",average);
for(i=0;i<n;i++)
{
if(s[i].marks>=average)
countav++;
else
countbv++;
}
printf("\nTotal No of students above average= %d\n",countav);
printf("\nTotal No of students below average= %d",countbv);
}
