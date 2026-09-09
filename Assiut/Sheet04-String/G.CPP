#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
cin>>s;
for(int i=0;i<s.size();i++)
 {
    if(isupper(s[i]))
     {
        s[i]=tolower(s[i]);
     }
    else if(islower(s[i]))
    {
        s[i]=toupper(s[i]);
    } 
    else if(s[i] == ',')
    {
      cout<<" ";  
      continue;
    }
   cout<<s[i]; 
 }
    return 0;
}