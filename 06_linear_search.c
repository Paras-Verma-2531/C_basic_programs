# include <stdio.h> 
void input(int *ptr,int size);
char *search(int *ptr,int size,int num);
int *ptr;
int main() {
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    ptr=arr; // initializing pointer with address of array
    input(ptr,size);
    printf("enter the number to be search: ");
    int num;
    scanf("%d",&num);
    char *answer=search(ptr,size,num); // char pointer recieves string as an output
    printf("%s",answer);
    return 0 ;
}
void input(int *ptr,int size) 
{
    for(int i=0;i<size;i++)
    {
        printf("enter the %d element: ",(i+1));
        scanf("%d",(ptr+i)); // assigning values through pointer
    }
}
char *search(int *ptr,int size,int num) // pointer function pointing to char 
{
    for(int i=0;i<size;i++)
    {
        if(num==*(ptr+i)){ return " success";} // returns success if search is succesful
    }
    return "failure";// returns failure if search is unsuccesful
}