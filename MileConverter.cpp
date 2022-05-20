#include <iostream>
#include <Windows.h> //for clear console code
using namespace std;
int main()
{//a converter for mile to kilometer
system("cls"); // clear console

double const mile_to_kilometer {1.6}; 
double mile{0};
double kilometer{0};

cout<<"welcome to the mile to kilometer converter "<<endl;
cout<<"enter the amount of mile you want to convert please"<<endl;

cin>>mile;
    kilometer=mile * mile_to_kilometer;

cout<<mile<<"  mile is equivalent to :  "<<kilometer<<"  kilometer"<<endl<<endl<<endl<<endl;

}