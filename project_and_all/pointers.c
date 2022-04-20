#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    // int j=9;
    // int *k = &j; //*k is an pointer that store the address of j
    // printf(" the address of j is %d\n", k);// pointers
    // printf("the value of j is %d\n",*k);
    // printf("the address of k is %u\n",&k);
    // printf("the value at address k is %u\n",*(&k));
    int a=7,b=9;
    printf("the value of a and b before swap is %d ,%d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after swap is %d ,%d\n",a,b);
    int p = 12, m = 23;
    int *rs = &p;
    int *js = &m;
    printf("the addition of %d, %d is %d", p, m, (*rs + *js)); //  addition through pointers....>>

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
