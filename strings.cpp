#include <iostream>
#include <string>
using namespace std;
int main()
{
string part1{"c++ "};
string part2{"is good"};

cout<<part1 + part2<<endl;

string sentence;
sentence = part1 + "" + part2;
cout<<sentence;
}