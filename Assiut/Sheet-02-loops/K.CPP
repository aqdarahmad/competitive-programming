using namespace std;
#include <bits/stdc++.h>
 
int main() {
long long n;
cin>>n;
for(long long i=1;i<=n;i++)
{
    if(n%i==0)
      cout<<i<<endl;
}
    return 0;
}