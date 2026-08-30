
using namespace std;
#include<bits/stdc++.h>
#include<cmath>

/*
even or odd

*/

int main()
{

long long a,b,c,d;
cin>>a>>b>>c>>d;

long long x=1;

x=(x*a)%100;
x=(x*b)%100;
x=(x*c)%100;
x=(x*d)%100;

cout<<setw(2)<<setfill('0')<<x<<endl;

return 0;
}

