// returning value through void function
void sumAvg(int a,int b,int *sum,float *avg);
void sumAvg(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)*sum/2;
}
# include <stdio.h>
int main() {
    int a=4;
    int b=5;
    int sum;
    float avg;
    sumAvg(a,b,&sum,&avg);
    printf("the sum is %d\n",sum);
    printf("the avg is %f\n",avg);

 return 0 ;
}
