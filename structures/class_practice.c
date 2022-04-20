#include <stdio.h>
#include <string.h>
struct student
{
    int age;
    int roll_no;
    char name[20];
    char city[100];
    char father_name[20];
};
int main()
{
    struct student st;
    printf("enter your name\n");
    gets(st.name);
    printf("enter your age\n");
    scanf("%d", &st.age);
    printf("enter your father's name\n");
    scanf("%s", st.father_name);
    printf("enter your roll no\n");
    scanf("%d", &st.roll_no);
    printf("enter your city\n");
    scanf("%s", st.city);

    printf("your name is %s\n", st.name);
    printf("your roll no is %d\n", st.roll_no);
    printf("your father name is %s\n", st.father_name);
    printf("your address is %s\n", st.city);
    printf("your age is %d\n", st.age);

    return 0;
}