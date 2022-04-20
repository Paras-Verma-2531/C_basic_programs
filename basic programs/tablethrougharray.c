#include <stdio.h>
void multable(int *arr, int num, int n)
{
    printf("the table of %d is :", num);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, (i + 1), arr[i]);
    }
    printf("\n");
    printf("*************************\n");
}
int main()
{
    int arr[3][10];
    multable(arr[0], 9, 10);
    multable(arr[1], 2, 10);
    multable(arr[2], 7, 10);
    return 0;
}
