# include <stdio.h> 
void inputLength(int *len);// input the length
void inputElements(char *ptr,int len);// ask string from user
void check_alpha(char *ptr,int len);// checks the string
int main() {
    int length;
    inputLength(&length);
    char array[length];
    char*ptr=array;
    inputElements(ptr,length);
    check_alpha(ptr,length);
    
    return 0 ;
}
void inputLength(int *len)
{
    int length;
    printf("enter the length of string: "); // input the length from user and set it using call by refrence
    scanf("%d",&length);
    *len=length;
}
void inputElements(char *ptr,int len)
{
    //char arr[len];
    printf("enter string of length : %d\n",len); 
    fflush(stdin);
    gets(ptr);// accepting name from user by char pointer
    printf("the string is %s\n",ptr);
}
void check_alpha(char *ptr,int len)
{
    int word=0,sp_c=0,digit=0;
    for(int i=0;i<len;i++)
    {
        if((*(ptr+i)>=65&&(*(ptr+i)<=90))||(*(ptr+i)>=97&&(*(ptr+i)<=122))){word++;}// checks with ASCII code for words
        else if((*(ptr+i)>=48&&(*(ptr+i)<=57))){digit++;}//checks with ASCII code for digits
        else if(*(ptr+i)==' '){continue;}
        else{sp_c++;}// if no matches, increases special charcter by 1
    }
    printf("total number of alphabets in %s are:  %d\n",ptr,word);
    printf("total number of digits in %s are: %d\n",ptr,digit);
    printf("total number of special character in %s are: %d\n",ptr,sp_c);
}