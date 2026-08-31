using namespace std;
 
#include <bits/stdc++.h>
 
int main() {
 
long long x;
cin>>x;
bool b = true;
 
if(x==2) {
    cout<<"YES"<<endl;
    return 0;
}
for(int i=2;i*i<=x;i++)
{
    if(x%i==0)
     b=false;
}
if(b) {
    cout<<"YES"<<endl;
    return 0;
}
else
{
    cout<<"NO"<<endl;
}
 
    return 0;
}