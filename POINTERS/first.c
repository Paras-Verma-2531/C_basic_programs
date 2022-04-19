#include<stdio.h>
int sum(int *x,int *y);
int main()
{
    // int a=5,b=7;
    // //printf("the sum of %d and %d is %d\n",a,b,sum(a,b));// call by value
    // printf("the sum of %d and %d is %d\n",a,b,sum(&a,&b));
    // a=34;
    // b=45;
    // //printf("the sum of %d and %d is %d\n",a,b,sum(a,b));
    // printf("the sum of %d and %d is %d\n",a,b,sum(&a,&b));

    int a=5;
    int *a1=&a;
  
    // int *a1=&a;
    int **k=&a1;
    printf("the address of %d is %u\n",a,a1);
     printf("the address of %d is %u\n",a,&a); //address of a
     printf("the address of a1 is %u\n",&a1); //addresss of a
    
     printf("the value at address of a1 id %u\n",(a1));// address of a through address of a1
     printf("the address of a1 is %u\n",k); //address of a1
     printf("the value of a1 is %u\n",**k); // value of a through k
    return 0;
}
// int sum(int *a, int *b)
// {

//     return (*a+*b);

// } 