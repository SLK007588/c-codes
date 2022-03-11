#include<stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
	float a,b,c,d,real,imag,x1,x2;
	printf("Enter three  co-efficient\n");
	scanf("%f%f%f",&a,&b,&c);

	if(a==0 && b==0)
	{
		printf("Invalid inputs");

	}
	else
	{
		d=(b*b)-(4*a*c);
		if(d==0)
		{
			printf("The roots real and equal\n");
			x1= -b/(2*a);
	x2=x1;
			printf("The roots are root1=%f and root2=%f\n",x1,x2);
		}
		else if(d>0)
		{
			printf("The roots are real and distinct\n");
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("The roots are root1=%f and root2=%f\n",x1,x2);
		}
		else
		{
			printf("The roots are imaginary\n");
			real=-b/(2*a);
			imag=sqrt(fabs(d))/(2*a);
			printf("The first root root1=%.3f+i%.3f\n", real, imag);
			printf("The second root root2=%.3f-i%.3f\n", real, imag);
		}
	}
return 0;
}

