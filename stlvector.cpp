#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int>nums1={1,3,3,5,7,0,0,0,0};
vector<int>nums2={2,4,9,10};

int m=5;
int n=4;
vector<int>nums3(m+n+n);
//sort(nums1.begin(),nums1.end()-4);

merge(nums1.begin(),nums1.begin()+m,nums2.begin(),nums2.end(),nums1.begin()+m);

for (auto &&i : nums1)
{
 cout   <<i;
}
return 0;

}