//Simple Calculator Program
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    //taking input of two numbers
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    //operations of two numbers a,b
    cout<<"Performing arithmetic operations:+,-,*,/:"<<endl;
    cout<<"Enter character:";
    cin>>ch;
    cout<<"As you have entered:"<<ch<<endl;;
    switch(ch)
    {
        case '+':
        cout<<"Addition is:";
        cout<< a <<"+"<< b <<"="<<a+b<<endl;
            break;//keyword exits from loop
        case '-':
        cout<<"Subraction is:";
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        case '*':
        cout<<"Multiplication is:";
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        case '/':
        cout<<"Division is:";
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
        default:
        cout<<"No operation"<<endl;
    }
return 0;
}