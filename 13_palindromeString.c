# include <stdio.h> 
# include <string.h> 
void copyWord(char *ptr,char *ptr2,int len);
void inputString(char *ptr);
int checkPalindrome(char *ptr,char *ptr2,int len);
int main() {
    char string[50];
    char *ptr=string;
    inputString(ptr);
    int length=strlen(ptr);
    char sec_string[10];
    char *ptr2=sec_string;
    copyWord(ptr,ptr2,length);
    int k=checkPalindrome(ptr,ptr2,length);
    k==1?printf("the word %s is palindrome",ptr):printf("the word %s is not palindrome",ptr);
    return 0 ;
}
void inputString(char *ptr) // input a word from user
{
    printf("enter a word :\n");
    fflush(stdin);
    gets(ptr);
}
void copyWord(char *ptr,char *ptr2,int len)
{ int k=0;
    for(int i=len-1;i>=0;i--)
    {
        *(ptr2+k)=*(ptr+i); // copying reverse of array 1 through it's pointer to another array
        k=k+1;
    }
}
int checkPalindrome(char *ptr,char *ptr2,int len)
{ int c=0;
   for(int i=0;i<len;i++)
   {
       if(*(ptr2+i)==(*(ptr+i))){continue;} // if ith position character of both the arrays are equal ,then continue
       else{c++;}
   }
   if(c>0){return -1;} //  if c>0 it means the word is not palindrome
   else{ return 1;}
}
