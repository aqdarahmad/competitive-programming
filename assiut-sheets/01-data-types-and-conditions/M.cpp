
using namespace std;
#include<bits/stdc++.h>
#include<cmath>

/*
comparing
*/

int main(){
char a;
cin>>a;

if(a>=48 && a<=57)
{
cout<<"IS DIGIT"<<endl;
}
else if(a>=65 && a <= 90)
{
 cout<<"ALPHA"<<endl;
  cout<<"IS CAPITAL"<<endl;
}
else
{
    cout<<"ALPHA"<<endl;
 cout<<"IS SMALL"<<endl;
}

    return 0;
}

