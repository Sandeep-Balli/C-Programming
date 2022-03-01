#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("Select the Operation\n");
  printf("Type + for Addition\n");
  printf("Type - for Subtraction\n");
  printf("Type * for Multiplication\n");
  printf("Type / for Division\n");
  scanf("%c",&ch);
  printf("Enter any two numbers\n");
  scanf("%d%d",&a,&b);
  switch(ch)
  {
  case '+':
      printf("%d + %d = %d",a,b,(a+b));
      break;
  case '-':
      printf("%d - %d = %d",a,b,(a-b));
      break;
  case '*':
      printf("%d * %d = %d",a,b,(a*b));
      break;
  case '/':
      printf("%d / %d = %0.2f",a,b,(a/(float)b));
      break;
  default:
    printf("Invalid Operator");
  }
  return 0;
}
