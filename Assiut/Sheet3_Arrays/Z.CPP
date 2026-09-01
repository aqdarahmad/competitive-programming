#include<bits/stdc++.h>

using namespace std;

vector<long long>v;
int n;
bool found ;
void solve(long long x)
{
    int l=0,r=n-1;
    if(v[l]==x || v[r]==x)
     {
        found = true;
        return;
     }
     while(l<=r)
     {
        int mid = (l+r)/2;

        if(v[mid]==x)
         {
             found = true;
              return;
         }
         else if(x>v[mid])
          { 
                l=mid+1;
          }
          else
           r=mid-1;
     }
    
}

int main(){
int q;
cin>>n>>q;
v.resize(n);
for(int i=0;i<n;i++){
     cin>>v[i];
}
sort(v.begin(),v.end());

while(q--)
{
  long long y;
  cin>>y;
  found=false; 
  solve(y);
  if(found)
   cout<<"found"<<endl;
   else
    cout<<"not found"<<endl;
   
}




return 0; 
}