using namespace std;

#include<bits/stdc++.h>

// 5.5 float 5 0.5
int main(){

int a,b,c;
int x,y,z;

cin>>a>>b>>c;
x=a;
y=b;
z=c;
multiset<int>s;

s.insert(a);
s.insert(b);
s.insert(c);

for(auto it=s.begin();it!=s.end();it++)
{
    cout<<*it<<endl;
}
cout<<endl;


cout<<x<<endl;

cout<<y<<endl;

cout<<z<<endl;

return 0;   
}