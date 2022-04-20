# include <stdio.h> 
struct date
{
   int day;
   int month;
   int year;
};
typedef struct employee
{
    int age;
    char name[15];
    struct date d1;
} emp;
void display(emp *);
int main() {
    emp e1;
    emp *e;
    e=&e1;
    printf("enter the name of employee\n");
    scanf("%s",&e->name);
    printf("enter the age\n");
    scanf("%d",&e->age);
    printf("enter the date of joining\n");
    scanf("%d",&e->d1.day);
    scanf("%d",&e->d1.month);
    scanf("%d",&e->d1.year);
  
  display(e);
    
    return 0 ;
}
void display(emp *e2) // value of e is copied to e2
{
    printf("the age of employee is %d\n",e2->age);
    printf("the name of employee is %s\n",e2->name);
    printf("the date of joining is %d/%d/%d\n",e2->d1.day,e2->d1.month,e2->d1.year);
}
