using namespace std;
 
#include <bits/stdc++.h>
 
int main() {
string s;
cin>>s;
string v=s;
reverse(v.begin(), v.end());
if(s==v)
{
    cout<<s<<endl;    
cout<<"YES"<<endl;
}
 
else
{
 
    cout<<stoi(v)<<endl;
cout<<"NO"<<endl;
}
 
    return 0;
}