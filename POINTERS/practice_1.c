#include <stdio.h>
int main()
{
   int n;
   printf("enter the number\n");
   scanf("%d", &n);
   int *add = &n;
   int number=10;
   int k=tentimes(&number);
   printf("the value is %d\n",k);
   printf("the value of num is %d\n",number);
   printf("the address of %d is %u\n", n, add);
   printf("the value at address %u is %d\n", add, *add);
   return 0;
}
// question 2--->
int tentimes(int *a)
{
  *a=10*(*a) ;// ten times of actual value;
  return *a;
}