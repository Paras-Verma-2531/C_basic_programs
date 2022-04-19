# include <stdio.h>
int main() {
    int n1,n2,n3;
    float avg;
    printf("enter three numbers\n");
    scanf("%d %d %d ",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("the average is %f ", avg);
 return 0 ;
}