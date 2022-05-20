#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> vector1;
vector<int> vector2;
vector<vector<int>>vector_2d;

vector1.push_back(10);
vector1.push_back(20);
vector1.at(0);
vector1.at(1);

vector2.push_back(100);
vector2.push_back(200);
vector2.at(0);
vector2.at(1);

vector_2d.push_back(vector1);
vector_2d.push_back(vector2);
vector_2d.at(0);
vector_2d.at(1);


cout<<vector1[0]<<"\t";
cout<<vector1[1]<<endl;
cout<<"size of the vector1 is :"<<vector1.size()<<endl;

cout<<vector2[0]<<"\t";
cout<<vector2[1]<<endl;
cout<<"size of the vector2 is :"<<vector2.size()<<endl;

//vector1.at(0) = 1000;

cout<<vector_2d[0][0]<<"\t";
cout<<vector_2d[0][1]<<endl;
cout<<vector_2d[1][0]<<"\t";
cout<<vector_2d[1][1]<<endl;
}
