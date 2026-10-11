#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
cin>>n;
vector<long long>v(n);
multiset<long long>st;
for(int i=0;i<n;i++){
 cin>>v[i];
 st.insert(v[i]);
}

for(auto it:st)
 {
    cout<<it<<" ";
 }


  
 
return 0;
}