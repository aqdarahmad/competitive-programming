#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
cin>>n;
long long sum=0;

while(n--)
{
    long long x;
    cin>>x;
    sum+=x;
}
cout<<abs(sum)<<endl;
return 0;    
}