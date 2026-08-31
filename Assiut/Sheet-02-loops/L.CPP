using namespace std;
#include <bits/stdc++.h>
 
 
int main() {
long long a,b;
cin>>a>>b;
long long g=0;
for(int i=1;i<=a;i++)
{
    if(a%i==0 && b%i==0)
      {
          g=i;
      }
}
cout<<g<<endl;
    return 0;
}