#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Stack
{
    char s[50];
    int top;

public:
    Stack()
        {
            top=-1;
        }
    void push(char val);
    char pop();
    int isfull();
    int isempty();

};

class Str
{
    char inputstr[50], revstr[50];
    Stack stobj;

public:
    void readstring();
    void revstring();
    void convertstring();
    void checkpalindrome();

};

int Stack::isempty()
{
    if(top==-1)//stack is empty
        return 1;
    else
        return 0;
}

int Stack::isfull()
{
    if(top==49)
        return 1;
    else
        return 0;
}

void Stack::push(char val)
{
    if(!isfull())
    {
        top++;//top=-1
        s[top]=val;
    }
    else
        cout << endl << "stack overflows/full......" << endl;
}

char Stack::pop()
{
    char val='\0';
    if(!isempty())
    {
        val=s[top];
        top--;

    }
    else
        cout << endl << "stack underflow/empty......" << endl;
    return val;
}

void Str::readstring()
{
    cout << "\nEnter string : ";
    gets(inputstr);
    cout << "\nYou entered : " << inputstr;
}

void Str::revstring()
{
    int i;
    char ch;
    for(i=0;inputstr[i]!='\0';i++)
    {
        stobj.push(inputstr[i]);
	}
 i=0;
    cout << "\nAfter reverse your string : ";
    while(!stobj.isempty())
    {
        ch=stobj.pop();
        cout<<ch;
        revstr[i]=ch;
        i++;
    }
    cout<<endl;
}

void Str::convertstring()
{
    int i,j=0;
    char tempstr[50];
    for(i=0;inputstr[i]!='\0';i++)
    {
        if(inputstr[i]>=97  && inputstr[i]<=122)
        {
            tempstr[j]=inputstr[i];
            j++;
        }
        else if(inputstr[i]>=65 && inputstr[i]<=90)
        {
            tempstr[j]=inputstr[i]+32;
            j++;
        }

    }
    tempstr[j]='\0';
    strcpy(inputstr,tempstr);
    cout << "\n\nYour converted string : " << inputstr << endl;
}


void Str::checkpalindrome()
{
    cout << "Want to check Palindrome ?" << endl;
    readstring();
    convertstring();
    for(int i=0;i<49;i++)
        revstr[i]=0;
        revstring();
    if(strcmp(inputstr,revstr)==0)
        cout << "\nYour string is PALINDROME" << endl;
    else
        cout << "\nYour string is NOT PALINDROME" <<endl;

}

int main()
{
    Str obj;
    obj.checkpalindrome();
    return 0;
}

