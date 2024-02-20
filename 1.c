#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool isValid(char* bracket)
{
    char st[10000];
    int top=-1;
    int i=0;
     int length;
    length=strlen(bracket);
    
    if(length%2==1)
    return 0;

    if(bracket[length-1]=='(')
    return 0;
    else if(bracket[length-1]=='{')
    return 0;
    else if(bracket[length-1]=='[')
    return 0;

    while(bracket[i]!='\0')
    {
        char symbol=bracket[i++];
        if(symbol=='(')
        {
            st[++top]=symbol;

        }else if(symbol=='{')
        {
            st[++top]=symbol;

        }else if(symbol=='[')
        {
            st[++top]=symbol;

        }else if(symbol==')')
        {
            if(top==-1)
            return 0;
            else{
            if(st[top]=='(')
            st[top--];
            else
            return 0;
            }
        }else if(symbol=='}')
        {
            if(top==-1)
            return 0;
            else
            {
            if(st[top]=='{')
            st[top--];
            else
            return 0;
            }
        }else if(symbol==']')
        {
            if(top==-1)
            return 0;
            else
            {
            if(st[top]=='[')
            st[top--];
            else
            return 0;
            }
        }
    }
    if(top==-1)
    return 1;
    else
    return 0;
}


