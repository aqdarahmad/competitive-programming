using namespace std;
#include <bits/stdc++.h>
int n;
string s;



int main(){

cin>>n;
cin>>s;
long long ans=0;

for(int i=0;i<n;i++)
{
    ans +=(s[i]-'0');
}
cout<<ans<<endl;

 return 0;   
}