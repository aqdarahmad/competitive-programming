using namespace std;
#include <bits/stdc++.h>
 
int main() {
 long long n,m;
 cin>>n>>m;
 vector<long long>v(n);
 vector<long long>freq(m+1,0);
 
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
     freq[v[i]]++;
 }
  for(int i=1;i<=m;i++)
 {
  // if(freq[i]!=0)
   cout<<freq[i]<<endl;
  
 }