# include <stdio.h>
int main() {
//   int a;
//   printf("enter the value of a\n");
//   scanf("%d",&a);
//   // to check whether a number is even or not...
//   int b=(a&1==1)?0:1;// ----ternary operator---
//   printf("the answer is %d",b);
// int rating;
// printf("enter your rating\n");
// scanf("%d",&rating);
//   switch (rating)
//   {
//   case 1:
//       printf("you rating is 1");
      
//       break;
//     case 2:
//      printf("your rating is 2");
//       break;
  
//   default:
//       printf("invalid rating!!");   
//       break;
//   }
// printf("enter a nuber whose factorial u want  to calculate..\n");
// int num;
// scanf("%d",&num);
// int i,f=1;
// for ( i = 1; i <=num; i++)
// {
//     f=f*i;
// }
// printf("the factorial is  %d ",f);
int marks1,marks2,marks3;
double avg=0.0;

printf("enter your first sub marks out of 100 \n");
scanf("%d",&marks1);

printf("enter your second sub marks out of 100 \n");
scanf("%d",&marks2);
printf("enter your third sub marks out of 100 \n");
scanf("%d",&marks3);
if(marks1<33||marks2<33||marks3<33)
{
    printf("you are fail\n");
    //printf("1");
}
else{
    avg=(marks1+marks2+marks3)/3;
    if(avg<40)
    {
        printf("you are fail with an average less than 40\n");
        printf("your average %f",avg);
        //printf("2");

    }
    else{
        printf("you are pass with an average of %f",avg);
    }
}
 return 0 ;
}
