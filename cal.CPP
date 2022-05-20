#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;

cout<<"enter your first number : ";
cin>>a;

cout<<"enter your second number : ";
cin>>b;

cout<<"choose between these symbols - + / * :  ";
cin>>c;
switch (c)
{
case '-':
    cout<<a-b<<endl;
break;
  
case '+':
    cout<<a+b<<endl;
break;

case '*': 
    cout<<a*b<<endl;
break;

case '/':
    cout<<a/b<<endl;
break;

}
}