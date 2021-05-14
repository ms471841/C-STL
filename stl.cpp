#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

int arr[]={1,3,5,7,9,17,11,13,15};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>vect(arr,arr+n);


cout<<"vector :";
for(int i=0;i<=8;i++){
cout<<vect[i];
}
cout<<endl;

cout<<"reverse vector:";
reverse(vect.begin(),vect.end());
for(int i=0;i<=8;i++){

cout<<vect[i];
}
cout<<endl;

cout<<"sorted vector:";
sort(vect.begin(),vect.end());
for(int i=0;i<=8;i++){
cout<<vect[i];
}

cout<<endl;
cout<<"binary search:";
bool search=binary_search(vect.begin(),vect.end(),1);
search ? cout<<"present" :cout<<"not present";

cout<<endl;

cout<<"sorting in decending order :";
sort(vect.begin(),vect.end(),greater<int>());
for(int i=0;i<=8;i++){
cout<<vect[i];
}
//cout<<accumulate(vect.begin(),vect.end(),0);
cout<<endl;
cout<<"max element the vector:"<<*max_element(vect.begin(),vect.end());
cout<<endl;
cout<<"min element the vector:"<<*min_element(vect.begin(),vect.end());
cout<<endl;
cout<<"count x element:"<<count(vect.begin(),vect.end(),5);
//cout<<"lower bound:"<<lower_bound(vect.begin(),vect.end(),5);
cout<<endl;
vect.erase(vect.begin());
for(int i=0;i<=8;i++){
  cout<<vect[i];
}

}
