#include<iostream>
#include<list>
using namespace std;
int main(){

//making list
list<int>lt;
//Adding list element

for (int i = 0; i < 5; i++)
{
lt.push_back(i*2);
}
//print linked list

for (auto i=lt.begin(); i!= lt.end(); i++)
{
cout<<lt[*i];
}



}
