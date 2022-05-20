#include <iostream>
#include <windows.h>
using namespace std;
int maximum(int x, int y)
{
if(x>y)
    return x;
    else
    return y;
}
int main()
{
int a,b;

cout<<"enter the number you want to find out about "<<endl;
    cin>>a>>b;
        int c=maximum(a,b);

cout<<"the answer is : "<<c;

}