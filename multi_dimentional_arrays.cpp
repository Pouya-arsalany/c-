#include <iostream>
#include <Windows.h> //clear console 
using namespace std;
int main()
{
system("cls"); //clear console

int two_D [2] [3]={{1,2,3},{5,6,7}};

for(int rows=0;rows<2;rows++)
{
    for(int col=0;col<3;col++)
    {
    cout<<two_D[rows][col]<<" ";
    }
    cout<<endl;
}
//it must print 1 2 3
//              5 6 7



}