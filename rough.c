// #include <stdio.h>
// void inputsize(int *row1, int *column1, int *row2, int *column2);
// void input(int *ptr, int row, int column);
// void display(int *ptr,int row,int column);
// int main()
// {
//   int row1, column1, row2, column2;
//   inputsize(&row1, &column1, &row2, &column2);
//   int mat1[row1][column1];
//   int *ptr1 = mat1;
//   int mat2[row2][column2];
//   int *ptr2 = mat2;
//   int mat3[3][3];int *ptr3=&mat3;
//   if (column1 == row2)
//   {
//     printf("enter the elements of first matrix:\n");
//     input(ptr1, row1, column1);
//     printf("enter elements of second matrix:\n");
//     input(ptr2, row2, column2);
//     printf("the first matrix is :\n");
//     display(ptr1,row1,column1);
//     printf("the second matrix is :\n");
//     display(ptr2,row2,column2);
//     printf("the maltiplication is : \n");
//     calculate(ptr1,ptr2,ptr3,row1,column2);
//   }
//   else
//   {
//     printf("multiplication not possible\n");
//   }
//  return 0;
// }
// void input(int *ptr, int row, int column)
// {
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < column; j++)
//     {
//       printf("enter the %d row %d column element :", (i + 1), (j + 1));
//       scanf("%d", (ptr + (column * i + j)));
//     }
//   }
// }
// void inputsize(int *row1, int *column1, int *row2, int *column2)
// {
//   int a, b, c, d;
//   printf("enter the row size of matrix 1: ");
//   scanf("%d", &a);
//   printf("enter the column size of matrix 1: ");
//   scanf("%d", &b);
//   printf("enter the row size of matrix 2: ");
//   scanf("%d", &c);
//   printf("enter the column size of matrix 2: ");
//   scanf("%d", &d);
//   *row1 = a;
//   *column1 = b;
//   *row2 = c;
//   *column2 = d;
// }
// void display(int *ptr,int row,int column)
// {
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < column; j++)
//     {
//       printf("%d\t",*(ptr+(column*i+j)));
//     }
//     printf("\n");
//   }
// }
// void calculate(int *ptr,int *ptr2,int *ptr3,int row,int column)
// {
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<column;j++)
//     {
//       *(ptr3+(column*i+j))=*(ptr+(column*i+j))*(*(ptr2+(row*j+i)));
//       printf("%d\t",*(ptr3+(column*i+j)));
//     }
//     printf("\n");
//   }
// }
/******************************************************************************
exp:1.10P                                                  22/01/22
Design a structure "student_record' to store student details like name, SAP ID, enrollment number,
date of registration and data of birth. The element date of joining is defined using another structure
date' to store date details like day, month, and year. Get data of 'n' students and then print the
entered values [Hint: Use concept of Nested structures and Array of Structures]

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    struct date
    {
        int dd;
        int month;
        int year;
    }jd,dob;
    char name[100];
    long sap;
    char enrollment[100];
};
void input(struct student *record,int n)
{int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
    printf("Enter name of the student:\n");
    scanf("%[^\n]%*c",(record+i)->name);
    //fflush(stdin);
    printf("Enter sap id of the student :\n");
    scanf("%ld",&(record+i)->sap);
    printf("Enter enrollment number :\n");
    fflush(stdin);
    scanf("%[^\n]&*c",(record+i)->enrollment);
    printf("Enter date,month and year of birth \n");
    scanf("%d%d%d",&(record+i)->dob.dd,&(record+i)->dob.month,&(record+i)->dob.year);
    printf("Enter date,month and year of joining \n");
    scanf("%d%d%d",&(record+i)->jd.dd,&(record+i)->jd.month,&(record+i)->jd.year);
    }
}
void print(struct student *record,int n)
{int i;
 for(i=0;i<n;i++)
 {
 printf("Name : %s \n",(record+i)->name);
 printf("Sap id: %ld \n",(record+i)->sap);
 printf("Enrollment number : %s \n",(record+i)->enrollment);
 printf("Date of birth : %d.%d.%d \n",(record+i)->dob.dd,(record+i)->dob.month,(record+i)->dob.year);
 printf("Date of joining : %d.%d.%d \n",(record+i)->jd.dd,(record+i)->jd.month,(record+i)->jd.year);
}
}
int main()
{
    int n,i;
    printf("Enter number of students \n");
    scanf("%d",&n);
    struct student std[n];
    input(&std[0],n);
    print(&std[0],n);
    return 0;
}
