#include <stdio.h>
struct Student
{
    int age;
    int roll_no;
    char name[20];
    char city[100];
    char father_name[20];
};
int main()
{
    struct Student student[5];
    for (int i = 0; i <5; i++)
    {
        printf("enter details of %d student \n", (i + 1));
        printf("enter name :\n");
        scanf("%s", student[i].name);
        printf("enter the age :\n");
        scanf("%d", &student[i].age);
        printf("enter your father name:\n");
        scanf("%s", student[i].father_name);
        printf("enter your roll no:\n");
        scanf("%d", &student[i].roll_no);
        printf("enter your city:\n");
        scanf("%s", student[i].city);
    }

    return 0;
}