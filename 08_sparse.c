# include <stdio.h> 
int *ptr; // goabally declared pointer
void setrow_column(int *m,int *n);// function prototype to set rows and column
void enterElements(int m,int n);// function prototype to set elements
char *check(int *ptr,int m,int n);// function prototype to check whether matrix is sparse or not
int main() {
    int m,n;
    setrow_column(&m,&n);
    int array[m][n];
    ptr=array[0];
    enterElements(m,n);
    char *result=check(ptr,m,n);
    printf("%s\n",result);
 return 0 ;
}
void setrow_column(int *m,int *n)
{
    int a,b;
    printf("enter the size of row and column:\n");
    scanf("%d\n",&a);
    scanf("%d",&b);
    *m=a;
    *n=b;
}
void enterElements(int m,int n)
{
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the %d row %d column element :",(i+1),(j+1));
            scanf("%d",(ptr+m*i+j));
        }
    }
}
char *check(int *ptr,int m,int n) // checks whether the matrix is sparse or not 
//and return address of string(sparse or not_sparse)
{
    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(*(ptr+m*i+j)==0){c=c+1;} //accesing the element through pointers
           // increasing the c by 1 if element at [i] is 0
        }
    }
    if(c>(m*n)/2) // checks if the counter is greater than the half of size of matrix
    {return "sparse";}
    // returns suitable message
    else{ return "not_sparse";}
}