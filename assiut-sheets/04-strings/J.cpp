using namespace std;
#include <bits/stdc++.h>
 
int main() 
{
string s;
cin>>s;
int x=s.size();
int freq[26]={0};

for(int i=0;i<s.size();i++)
   freq[s[i]-'a']++;
 
for(int i=0;i<26;i++)
{  
     if(freq[i]!=0)
    {
     cout<<char(i+'a')<<" : "<<freq[i]<<endl;
    
}
}

return 0;
}