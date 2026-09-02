#include <bits/stdc++.h>
 
int main() {
long long a,b;
cin>>a>>b;
string s;
cin>>s;
bool f=true;
if(s[a]!='-')
 f=false;
 
for(int i=0;i<s.size();i++)
{
    if(i!=a && !isdigit(s[i]))
     f=false;
}
if(f)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
    return 0;
}