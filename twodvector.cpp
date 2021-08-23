#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(int a[][3], int n)
{
    vector<vector<int>>tranP;
    tranP.resize(n);    
    for(int i=0;i<n;i++){
       //  tranP.push_back(std::vector<int>());
        for(int j=0;j<3;j++){
    
           vector<int>temp;
           temp.push_back(a[i][j]);
            
          tranP.push_back(temp);
        }
        
    }
//  return tranP;
  for (int i = 0; i < 3; i++) {
        for (
            auto it = tranP[i].begin();
            it != tranP
            [i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    
}


int main(){

int a[2][3]={ 
    {2,3,4},
    { 5,6,7}

};

transpose(a,2);



}