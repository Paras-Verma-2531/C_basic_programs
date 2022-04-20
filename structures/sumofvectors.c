# include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main() {
    struct vector v1,v2;
    printf("enter the i comp of frst vecor\n");
    scanf("%d",&v1.x);
    printf("enter the j comp of frst vecor\n");
    scanf("%d",&v1.y);
    printf("enter the i comp of second vecor\n");
    scanf("%d",&v2.x);
    printf("enter the j comp of second vecor\n");
    scanf("%d",&v2.y);
    printf("the sum of vector is %di + %dj\n",(v1.x+v2.x),(v1.y+v2.y));
 return 0 ;
}