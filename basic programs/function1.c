# include <stdio.h>
void display();  //method prototype
int sum(int a,int b);//method prototype
int main() {
    display(); //method call
    printf("hello\n");
    int k=sum(23,45);
    printf("the sum is % d" ,k);
    
 return 0 ;
}
void display() // method definition 
{
    printf("hello paras..\n");
}
int sum(int a,int b)
{
    int s= a+b;
    return s;
}