#include <stdio.h>
typedef struct Date // date structure which contain day, month and year as it's data members.
{
  int day;
  int month;
  int year;
} Date;
typedef struct student_record
{
  char name[30];
  int SAP_ID; // student record structure which contain SAP_ID,enrollement number , date of joining of date of birth
  Date d1, d2;
} student_record;
void inputDetails(student_record *st, int n);
void display(student_record *st,int n);
int main()
{
  int n;
  printf("enter the number of students: ");
  scanf("%d", &n);
  student_record st_r[n]; // (student_record structure) array of size n
  student_record *ptr = st_r; // student record pointer which holds the address of st_r
  inputDetails(ptr, n);
  display(ptr,n);
  return 0;
}
void inputDetails(student_record *st, int n) // input the details from user
{
  for (int i = 0; i < n; i++)
  {
    fflush(stdin);
    printf("enter the name of %d student: ", (i + 1));
    //fflush(stdin);
    gets((st + i)->name);
    printf("enter the SAP ID  of %d student: ", (i + 1));
    scanf("%d", &(st + i)->SAP_ID);
    printf("enter the date of birth (dd/mm/yy) of %d student : ", (i + 1));
    scanf("%d", &(st + i)->d1.day);
    scanf("%d", &(st + i)->d1.month);
    scanf("%d", &(st + i)->d1.year);
    printf("enter the date of joining (dd/mm/yy) of %d student : ", (i + 1));
    scanf("%d",&(st + i)->d2.day);
    scanf("%d",&(st + i)->d2.month);
    scanf("%d",&(st + i)->d2.year);
  }
}
void display(student_record *st,int n) // display the details of student_record structure
{
  for(int i=0;i<n;i++)
  {
    printf("the details of %d student are :\n",(i+1));
    
    printf("name : %s\n",(st+i)->name);
    printf("SAP ID : %d\n",(st+i)->SAP_ID);
    printf("date of birth : %d/%d/%d\n",(st+i)->d1.day,(st+i)->d1.month,(st+i)->d1.year);
    printf("date of joining : %d/%d/%d\n",(st+i)->d2.day,(st+i)->d2.month,(st+i)->d2.year);
  }
}
