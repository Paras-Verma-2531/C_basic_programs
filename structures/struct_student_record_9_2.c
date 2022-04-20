#include <stdio.h>
void check();
struct date
{
    int day;
    int month;
    int year;
};
struct record
{
    char name[100];
    int SAP_ID;
    int enr_n;
    struct date d1;
};

int main()
{
    struct record stu[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the details of %d student.....\n", (i + 1));
        // fflush();
        printf("enter the name\n");
        scanf("%s", &stu[i].name);
        printf("enter SAP ID\n");
        scanf("%d", &stu[i].SAP_ID);
        printf("enter the enrollement number\n");
        scanf("%d", &stu[i].enr_n);
        printf("enter the date of registration in (dd/mm/yy) format\n");
        scanf("%d %d %d", &stu[i].d1.day, &stu[i].d1.month, &stu[i].d1.year);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the details of %d student is:--\n", (i + 1));
        printf("the name is :%s\n", stu[i].name);
        printf("the SAP ID is %d\n", stu[i].SAP_ID);
        printf("the enrollement number is %d\n", stu[i].enr_n);
        printf("the date of joining is %d/%d/%d\n", stu[i].d1.day, stu[i].d1.month, stu[i].d1.year);
    }
    int date1=stu[0].d1.day;
    int a=0;
    
    for (int i = 0; i <3; i++)
    {
    
     if(date1>stu[i].d1.day)
     {
        date1=stu[i].d1.day;
        a=i;
        
     }
      
    }
    printf("the details of student who joined at the beginning is\n");
    printf("the name is : %s\n",stu[a].name);
    printf("the SAP ID is :%d\n",stu[a].SAP_ID);
    printf("the enrollement number is %d\n",stu[a].enr_n);
    
    
  
    return 0;
}
