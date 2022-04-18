# include <stdio.h> 
typedef struct Complex
{
   int real;int imag;
}Complex;
void inputReal_Imag(Complex *c1,Complex *c2);
Complex *add(Complex *c1,Complex *c2); // returns complex number pointer
int main() {
   Complex c_1,c_2;
   Complex*c1=&c_1;Complex*c2=&c_2; 
   inputReal_Imag(c1,c2);
   Complex *c3=add(c1,c2);
   printf("the sum of real part is : %d\n",c3->real);
   printf("the sum of imaginary part is : %d\n",c3->imag);
   return 0 ;
}
void inputReal_Imag(Complex *c1,Complex *c2) // input the real and imag. part of 2 complex number
{
 printf("enter real part of first complex number: ");
 scanf("%d",&c1->real);
 printf("enter imaginary part of first complex number: ");
 scanf("%d",&c1->imag);
 printf("     *******     \n");
 printf("enter real part of second complex number: ");
 scanf("%d",&c2->real);
 printf("enter imaginary part of second complex number: ");
 scanf("%d",&c2->imag);
}
Complex *add(Complex *c1,Complex *c2) 
{
 // performs the addition on two complex niumber and returns another complex number pointer
   Complex *c3;
   c3->real=c1->real+c2->real;
   c3->imag=c1->imag+c2->imag;
   return c3;
}

