#include <stdio.h>
void display(int a[] , int n)
{
for(int i = 0 ; i < n ; i++)
{
 printf("%d\n",a[i]);
 }
}
int main()
{
 int n , a1[100] , i , j;
 printf("Enter number of elements : ");
 scanf("%d",&n);
 printf("Enter elements in array : ");
for(int i = 0 ; i < n ; i++)
 {
  scanf("%d",&a1[i]);
 }
 printf("Enter position at which you want to insert the element : ");
 scanf("%d",&i);
 if(i>n)
 {
   printf("Invalid Position");
 }
 else
 {
   for(int x = n-1 ; x >= i-1 ; x--)
   {
     a1[x+1] = a1[x];
   }
   printf("Enter the element to be inserted\n");
   scanf("%d",&a1[n-1]);
 }
 printf("Array after inserting the element\n");
 n=n+1;
 display(a1,n);
 printf("Enter position at which you want the element to be deleted : ");
 scanf("%d",&j);
 if(j>n)
 {
   printf("Invalid Position");
 }
 else
 {
   for(int x = j-1 ; x < n-1 ; x++)
   {
     a1[x] = a1[x+1];
   }
 }
 printf("Array after inserting the element\n");
 n=n-1;
 display(a1,n);
return 0;
}