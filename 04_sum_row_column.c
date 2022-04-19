#include <stdio.h>
void calculate(int *ptr, int m, int n);
void input(int *ptr, int m, int n);
int *ptr; // declaring a pointer globally
int main()
{
    int m, n;
    printf("enter the size of row and column: ");
    scanf("%d", &m);
    scanf("%d", &n);
    int arr[m][n];
    ptr = arr[0]; // storing the address of array[0] to the pointer ptr
    input(ptr, m, n);
    calculate(ptr, m, n);

    return 0;
}
void input(int *ptr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element of %d row %d column : ", (i + 1), (j + 1));
            scanf("%d", (ptr + (n * i + j)));
        }
    }
}
void calculate(int *ptr, int m, int n)
{
    int sum_row = 0, sum_col = 0;
    if (n > m) // if number of columns are greater than number of rows
    {
        for (int i = 0; i <n;i++)
        {
            for (int j = 0; j <m; j++)
            {
                sum_col = sum_col + *(ptr + (n*j+i)); // traversing to column elements
            }
            printf("sum of %d column is : %d\n",(i+1),sum_col);
            sum_col=0;
        }
        for (int i = 0; i <m;i++)
        {
            for (int j = 0; j <n; j++)
            {
                sum_row =  sum_row+ *(ptr + (n*i+j));
            }
            printf("sum of %d row  is: %d\n",(i+1),sum_row);
            sum_row=0;
        }
    }
    else{
        for (int i = 0; i < m; i++)
        {
            for(int j=0;j<n;j++)
            {
                sum_row=sum_row+*(ptr+(n*i+j));
                sum_col=sum_col+*(ptr+(n*j+i));
            }
            printf("sum of %d row is : %d\n",(i+1),sum_row);
            printf("sum of %d column is : %d\n",(i+1),sum_col);
            sum_col=sum_row=0;
        }
        
    }
}