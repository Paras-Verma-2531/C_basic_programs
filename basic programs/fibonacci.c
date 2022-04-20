#include <stdio.h>
int fibonacci(int m);
int main()
{
    int m;
    printf("enter the number of terms \n ");
    scanf("%d", &m);
   int k= fibonacci(m);
   printf("the %d term is %d\n",m,k);

    return 0;
}
int  fibonacci(int m)
{
    int f1, f2, f;
    f1 = 0;
    f2 = 1;
    f = f1 + f2;
    if(m==1)
    {
        return f1;
    }
    if(m==2)
    {
        return f2;
    }
    else{
    
    for (int i = 1; i <= m - 2; i++)
    {
        if (i == (m - 2))
        {
           
            return f;

        }
        else
        {
           
            f1 = f2;
            f2 = f;
            f = f1 + f2;
        }
    }
}
}
