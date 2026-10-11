using namespace std;

#include <bits/stdc++.h>

int main() {
long long n,m;
cin>>n>>m;

vector<vector<long long>>v(n,vector<long long>(m));

for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
      cin>>v[i][j];
 }
 long long a;
 cin>>a;
 bool f=false;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
       if(v[i][j] == a)
        f=true;
 }
 if(f)
 {
     cout<<"will not take number"<<endl;
 }
 else
 {
     cout<<"will take number"<<endl;
 }
 
 
    return 0;
}
