#include<stdio.h>
void main()
{
char name[25];
float n,charges;
printf("Enter the name of the consumer and number of units consumed\n");
scanf("%s %f",name,&n);
if(n<=200)
     charges=n*0.8+100;
else if((n>200)&&(n<=300))
     charges=200*0.80+((n-200)*0.90)+100;
 else
     charges=200*0.80+100*0.90+((n-300)*1)+100;
 if(n>400)
     charges=1.15*charges;
 printf("name=%s\n",name);
 printf("charges-%f\n",charges);
 }
