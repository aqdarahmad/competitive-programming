using namespace std;
#include<bits/stdc++.h>



int main(){

int d;
cin>>d;
int y=d/365;


d=d%365;

int m=d/30;

d=d%30;

cout<<y<<" years "<<endl;
cout<<m<<" months "<<endl;
cout<<d<<" days "<<endl;



return 0;    
}