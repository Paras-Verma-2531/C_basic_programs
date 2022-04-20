#include <stdio.h>
int main()
{
    int num, i, c = 0;
    printf("enter a number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c += 1;
        }
    }
    if (c == 2)
    {
        printf("the number %d is prime ", num);
    }
    else
    {
        printf("the number %d is  not prime ", num);
    }

    return 0;
}