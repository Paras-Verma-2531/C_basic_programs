#include <stdio.h>
int main()
{
    int n;
    printf("enter the number whose table u want to print \n");
    scanf("%d", &n);
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, " %d X %d = %d\n", n, i, (n * i));
    }
   fclose(ptr);
   printf("table of %d succesfully generated!!!",n);
    return 0;

}
