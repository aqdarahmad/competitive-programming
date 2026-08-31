using namespace std;
 
#include <bits/stdc++.h>
long long fac(long long x)
{
    if(x==0 )
    return 1;
    
return x * fac(x-1);
}
int main() {
 
int t;
cin>>t;
while(t--){
long long c;
cin>>c;
cout<<fac(c)<<endl;
}
    return 0;
}