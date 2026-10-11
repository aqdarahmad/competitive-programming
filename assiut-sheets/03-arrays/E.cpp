#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++)
 cin>>v[i];


int mn=INT_MAX;
int j;
for(int i=0;i<n;i++)
{
    if(v[i]<mn)
     {
      mn=v[i];
      j=i;
     }
}
 
cout<<mn<<" "<<j+1;
  
 
return 0;    
}