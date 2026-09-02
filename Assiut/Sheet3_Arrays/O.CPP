#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
long long n;
cin>>n;
if(n<=2)
cout<<n-1;
else
{
    long long fb[n];
    fb[0]=0;
    fb[1]=1;
  for(int i=2;i<n;i++)
  {
      fb[i]=fb[i-1]+fb[i-2];
  }
  cout<<fb[n-1];
}
 
 
return 0;
}