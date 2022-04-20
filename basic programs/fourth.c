#include <stdio.h>
int main()
{
    float pi = 3.14;
    int radius;
    printf("enter the radius\n");
    scanf("%d", &radius);
    printf("the area of circle is %f\n", (pi * radius * radius));

    
    return 0;
}