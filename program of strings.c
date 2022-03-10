#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringcompare(char str1[50],char str2[50]); void stringconcatenate(char str1[50],char str2[50]); int stringlength(char str1[20]); void main()
{
char str1[50],str2[50];
int option,len;
printf("Enter 1 for string comparison 2 for string concatenation 3 for string length\n");
scanf("%d",&option);
switch(option)
{
case 1:printf("String Comaprison\n");
fflush(stdin);
printf("Enter the first string:");
//gets(str1);
scanf("%s",str1);
printf("Enter the second string:");
//gets(str2);
scanf("%s",str2);
stringcompare(str1,str2);
break;
case 2:printf("String Concatenation\n"); fflush(stdin);
printf("Enter the first string:\n");
//gets(str1);
scanf("%s",str1);
printf("Enter the second string:\n");
//gets(str2);
scanf("%s",str2);
printf("After concatenating\n");
stringconcatenate(str1,str2);
break;
case 3:printf("String Length\n");
//fflush(stdin);
printf("Enter string to find its length:\n");
//gets(str1);
scanf("%s",str1);
len=stringlength(str1);
printf("length of %s is %d\n",str1,len);
break;
default:printf("Invalid option\n");
}
}
/*user defined function for comparing two strings*/ void stringcompare(char str1[],char str2[]) {
int len1,len2,i;
len1=stringlength(str1);
len2=stringlength(str2);
/*not build-in function,it is user define function*/ if(len1!=len2)
printf("strings are different\n");
else
{
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]!=str2[i])
{
printf("Strings are different\n");
exit(0);
}
}
printf("strings are same\n");
}
}
/*user defined function for concatenating two strings*/
void stringconcatenate(char str1[],char str2[])
{
char str3[50];
int k,i;
k=0;
for(i=0;str1[i]!='\0';i++)
{
str3[i]=str1[i];
k=k+1;
}
for(i=0;str2[i]!='\0';i++)
{
str3[k]=str2[i];
k=k+1;
}
str3[k]='\0';
printf("Concatenated strings is %s",str3);
}
/*user defined function for calculating length of strings*/
int stringlength(char str1[])
{
int i,count=0;
for(i=0;str1[i]!='\0';i++)
{
count=count+1;
}
return count;
}
