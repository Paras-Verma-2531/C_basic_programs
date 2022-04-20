# include <stdio.h>
void passArray(int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the element at %d is %d\n",(i+1),*(ptr+i));
    }
    
 }
// void passArray(int ptr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {                                            <------ through array-------->
//         printf("the element at %d is %d\n",(i+1),ptr[i]);
//     }
// }
int main() {
    int arr []={1,2,3,4,5,7};
    passArray(arr,6);
    // int *ptr=arr;
    // ptr+=2;
    // printf("the element is %d ",*ptr);
 return 0 ;
}