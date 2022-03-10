#include<stdio.h>
#include<math.h>
void main()
{
int A[50][50],B[50][50],C[50][50],m,n,p,q,i,j,k; printf("Enter the size of first matrix\n"); scanf("%d%d",&m,&n);
printf("Enter the size of second matrix\n"); scanf("%d%d",&p,&q);
if(n==p)
{
printf("Enter the Element of first matrix\n"); for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("Matrix A is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\t %d",A[i][j]);
}
printf("\n");
}
printf("Enter the Element of second matrix \n"); for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&B[i][j]);
}
}
printf("Matrix B is \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("\t %d",B[i][j]);
}
printf("\n");
}
for(i=0;i<=m;i++)
{
for(j=0;j<q;j++)
{
C[i][j]=0;
for(k=0;k<n;k++)
{
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
printf("The product of two matrices is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
}
else
{
printf("Multiplication is not possible\n");
}
}
