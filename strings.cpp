#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){

string str=" e ";
string str2="  ";
 
 if(str==str2){
     cout<<"e";
 }
 char i=' ';
 str+=str2;
 cout<<str.size();

if(find(str.begin(),str.end(),i)!=str.end()){

    cout<<endl<<"found space";
    }
    if(str[0]==' '){
        cout<<"space";
    }

}