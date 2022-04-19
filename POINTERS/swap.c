#include <stdio.h>
int swapping(int a, int b);
int pointswap(int *a, int *b);
int main()
{
    int a = 7, b = 5;
    printf("the value of a and b before swapping is %d %d\n", a, b);
    swapping(a, b);
    printf(" the value of a and b after swapping is %d %d\n ", a, b);
    printf("the value of a and b before swapping is %d %d\n", a, b);
    pointswap(&a, &b);
    printf(" the value of a and b after swapping is %d %d ", a, b);
    return 0;
}
int swapping(int a, int b)
{
    int t = 0;
    t = a;
    a = b;
    b = t;
    return a;
    return b;
}
int pointswap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    return *a;
    return *b;
}