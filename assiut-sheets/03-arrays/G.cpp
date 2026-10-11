#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
cin>>n;
vector<long long>v(n);

for(int i=0;i<n;i++)
 cin>>v[i];

vector<long long>r=v;

reverse(r.begin(),r.end());

if(r==v)
 {
    cout<<"YES"<<endl;
 }
 else {
    cout<<"NO"<<endl;
 }


  
 
return 0;
}