#include <stdio.h>
#include <string.h>
struct employee
{
    int age;
    long mobile_number;
    char name[50];
};

int main()
{
    struct employee e1;
    printf("enter your name\n");
    gets(e1.name);
    printf("enter your age\n");
    scanf("%d",&e1.age);
    printf("your name is %s \n",e1.name);
    printf("your age is %d\n",e1.age);
    return 0;
}