#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int x=s.size();
    if(s.size()<=10)
     cout<<s<<endl;
    else
    cout<<s[0]<<s.size()-2<<s[x-1]<<endl;
}
    return 0;
}