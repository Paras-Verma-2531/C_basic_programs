st=input("enter your string \n")
ch=input("enter the character whose occurence u want to find..\n")
c=0;
for i in range(len(st)):
    if(ch == st[i]):
        c+=1;
print(f" the character {ch} is present {c} times")    
            