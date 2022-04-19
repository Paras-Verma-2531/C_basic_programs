#include<stdio.h>
int main()
{
    int a1=4;
    int *a=&a1;
    int **k=&a;
    int arr[]={1,2,3};
    int *ptr=arr;
    long arr1[]={1,2,3,4,5};
    long *ptr1=arr1;
    printf("the address of a is %u\n",a);
    printf("the value at %u is %d\n",a,*a);
    printf("the address of varibale which stores address of %d is %u\n",*a,*k);
    printf("the adress of array is %u\n",ptr);
    printf("the addresss of second index of array is %u\n",(ptr+1));
    printf("the  address of long array is %u\n",ptr1);
    printf("the adrress of second variable of array is %u\n",(ptr1+1));
   
    return 0;
}