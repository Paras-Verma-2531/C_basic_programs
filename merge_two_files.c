#include <stdio.h>
int main()
{
    FILE *ptr, *ptr2, *ptr3;
    
    char ch, ch1;
    ptr = fopen("file1.txt", "r");
    fscanf(ptr, "%c", &ch);
    ptr3 = fopen("mergedfile.txt", "a");
    while (ch = fgetc(ptr) != EOF)
    {
        printf("%c",ch);
        fputc(ch, ptr3);
    }

    fclose(ptr);

    ptr2 = fopen("file2.txt", "r");

    while (ch1 = fgetc(ptr2) != EOF)
    {
        fputc(ch1, ptr2);
    }
    fclose(ptr2);

    fclose(ptr3);

    return 0;
}