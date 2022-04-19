#include <stdio.h>
int main()
{
    char name1[24];
    char name2[50];
    int sal1, sal2;
    FILE *ptr;
    printf("enter name of first person\n");
    gets(name1);
    printf("enter salary of first person\n");
    scanf("%d", &sal1);

    printf("enter name of second person\n");
    gets(name2);
    printf("enter salary of second person\n");
    scanf("%d", &sal2);
    ptr = fopen("data.txt", "a");

    fprintf(ptr, "%s", name1);
    fprintf(ptr, ", %d\n", sal1);
    fprintf(ptr, "%s", name2);
    fprintf(ptr, ", %d\n", sal2);
    fclose(ptr);

    printf("done!!!");

    return 0;
}
