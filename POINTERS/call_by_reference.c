# include <stdio.h>
int sum(int a,int b);
int main() {
    int a=4,b=7;
    int k=sum(a,b);
    printf("the sum is %d\n",k);
    printf("the value of a and b is %d , %d\n",a,b);// call by value
 return 0 ;
}
int sum(int a,int b)
{
    return a+b;
    a=2341;
    b=4531;
}
