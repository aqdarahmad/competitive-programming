
using namespace std;
#include<bits/stdc++.h>
#include<cmath>

/*
even or odd

*/

int main()
{

int x;

cin>>x;


while(x>9)
{
    x=x/10;
}
if(x%2==0)
cout<<"EVEN"<<endl;
else
cout<<"ODD"<<endl;
return 0;
}

