#include <stdio.h>

struct employee // int
{
    int age;
    char name[100];
    int salary;
};

int main()
{
    int key;
    struct employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("the key for %d person is %d\n",(i+1),(i+1));
        printf("enter the age of %d\n", (i + 1));
        scanf("%d", &e[i].age);
        printf("enter the salary of %d\n",(i+1));
       
        scanf("%d", &e[i].salary);
        printf("enter the name of %d\n",(i+1));
        scanf("%s", &e[i].name);
    }
    printf("enter your key\n");
    scanf("%d",&key);

    printf("employee name is  %s age is %d and salary is %d\n", e[key-1].name, e[key-1].age, e[key-1].salary);

    return 0;
}