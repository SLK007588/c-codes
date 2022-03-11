#include <stdio.h>
int main()
{
    int num1,num2;	/*Declaration of variables*/
    float result=0;	/*Declaration of variables*/
    char ch;    //to store operator choice
    printf("Choose operation to perform (+,-,*,/): ");
    scanf(" %c",&ch);
     printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    switch(ch)
    {
        case '+': result=num1+num2;
           	         break;
       case '-': result=num1-num2;
                     break;
       case '*': result=num1*num2;
                    break;
        case '/': result= num1/num2;
                    break;
        }
  printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
 return 0;
}
