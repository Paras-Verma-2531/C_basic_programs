#include <stdio.h>
void pass(int i);
void changeval(int *val);
int main()
{
    int n = 9;
    int *k = &n;
    printf("the address of 9 is %d\n", k);
    printf("the value at address k  is %d\n", *k);
    int i;
    printf("the address of i is %d\n", &i);
    pass(i);
    int inval = 12;
    int *upval = &inval;
    printf("the old value  is %d\n",inval);
    changeval(&inval);
    printf("the new value is %d\n", inval);
    int b=345;
    int *az=&b; //address of b
    int **az1=&az;// address of az
    printf("the value of b is %d\n",**az1); //prints the value of b through the address of az

    return 0;
}
void pass(int i) // the address will be different because it is pass by value
{
    printf("the address of i is %d\n", &i);
}
void changeval(int *upval)
{
    *upval = 34;
}
