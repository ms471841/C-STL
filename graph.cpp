#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<int>adj[],int u ,int v)

{

  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printadj(vector<int>adj[],int v)
{
   for(int i=0;i<v;i++)
   {  cout<<i<<"  ";
       for(auto i: adj[i])
       {
           cout<<i;
       }
       cout<<endl;
   }
}

int main()
{

int v=3;
vector<int>adj[v];
addedge(adj,0,1);
addedge(adj,1,2);
addedge(adj,0,2);
printadj(adj,v);


}