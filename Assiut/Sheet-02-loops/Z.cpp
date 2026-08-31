using namespace std;

#include<bits/stdc++.h>


int main()
{
long long k,s;
cin>>k>>s;
long long ans=0;
long long z=0;

for(int x=0;x<=k;x++)
{
    for(int y=0;y<=k;y++)
     {
        z=s-y-x;
          if(z>=0 && z<=k)
           ans++;
     }
}
cout<<ans<<endl;

return 0;    
}