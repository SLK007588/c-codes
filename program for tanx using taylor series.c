#include<stdio.h>
#include<math.h>

void main()
{
	int  i,n;
	float x, t, sum=0;
	printf("Enter value of degree \n");
	scanf("%f",&x);
	x=x*(3.1415/180);
	t=x;
    sum=x;
 	for(i=1; i<=n; i++)
	{    t=(t*(-1)*x*x ) / (2*i*(2*i+1));
         sum=sum+t;
	}
	printf("The  value of sin(%f)=%f\n",x,sum);
	printf("Using library function=%f",sin(x));
}
