#include <stdio.h>
#include<math.h>
int main()
{
    int n, a, s = 0, d = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    a = n;
    while (n != 0)
    {
        d = n % 10;
        printf("%d\n",d);
        printf(pow(d,3));
       s=s+(pow(d,3));
       printf("%d\n",s);
        n = n / 10;
    }
    
    // if (a == s)
    // {
    //     printf("the number %d is Armstrong", s);
    // }
    // else
    // {
    //     printf("the number %d is not  Armstrong",s);
    // }

    return 0;
}
