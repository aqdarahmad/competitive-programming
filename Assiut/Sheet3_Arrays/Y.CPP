#include<bits/stdc++.h>

// 6 4 2 7 2 7
// 6 10 12 19 21 28
using namespace std;

vector<long long>v;
vector<long long>sum;
int n;


void solve(int l,int r)
{
  if(l==1)
    cout<<sum[r-1]<<endl;
    else
     cout<<sum[r-1]-sum[l-2]<<endl;
}



int main(){


int q;
cin>>n>>q;
v.resize(n);
sum.resize(n);

for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0)
         sum[i]=v[i];
         else
          sum[i]=sum[i-1]+v[i];
}

while(q--)
{
    int l,r;
    cin>>l>>r;
    solve(l,r);
}

return 0; 
}