#include <iostream>
#include<vector>
using namespace std;
  string reverseVowels(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]== 'o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            {
                v.push_back(i);
            }
        }
   for (auto i : v) {
       std::cout << i << std::endl;
   }
        int i=0,j=v.size()-1;
        while(i<=j)
        {
            char temp=s[v[i]];
            s[v[i]]=s[v[j]];
            s[v[j]]=temp;
            i++;
            j--;
        }
     
        return s;
        
    }

int main()
{
    string s="leetcode";
    std::cout << "original s: "<<s << std::endl;
    s=reverseVowels(s);
    std::cout<<"reverseVowels: " <<s<< std::endl;
    return 0;
}
