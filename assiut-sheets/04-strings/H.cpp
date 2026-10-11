#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
string sub = "101";
string sub2 = "010";
while(t--)
{

    string s1;
    cin>>s1;

    if(s1.find(sub) != string::npos || s1.find(sub2)!= string::npos)
     cout<<"Good"<<endl;
    else
    cout<<"Bad"<<endl; 
}



return 0;
}