
using namespace std;
#include<bits/stdc++.h>
#include<cmath>

/*
comparing
*/

int main(){
string s1,s2;
getline(cin,s1);
getline(cin,s2);

int n=s1.size();
int n1=s2.size();

if(s1[n-2]==s2[n1-2] && s1[n-1]==s2[n1-1])
 cout<<"ARE Brothers"<<endl;
 else
 cout<<"NOT"<<endl;

    return 0;
}

