#include <iostream>
using namespace std;
int main()
{
char x;
cout<< "let me guess : ";
cin>>x;

switch(x)
{

case'A':
    cout<<"adc";
        break;
case'B':
    cout<<"supp";
        break;
case'C':
    cout<<"jungler";
        break;
case'D':
    cout<<"Middle";
        break;
case'E':
    cout<<"Top";
        break;
        default:cout<<"ERROR";
}
}