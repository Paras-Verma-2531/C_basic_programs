#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter the no. whose factorial u want to calculate..\n");
    scanf("%d",&n);
    int k =fact(n);
    printf("the factorial of  %d  is %d ",n,k);

    return 0;
}
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}