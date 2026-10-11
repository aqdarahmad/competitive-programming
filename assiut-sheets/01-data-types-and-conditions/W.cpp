using namespace std;

#include<bits/stdc++.h>


int main(){

double a,b,c;
char op,eq;
cin>>a>>op>>b>>eq>>c;

if(op=='+')
{  if(a+b==c)
    cout<<"Yes"<<endl;
   else
    cout<<a+b<<endl; 
}
else if(op=='-')
{  if(a-b==c)
     cout<<"Yes"<<endl;
   else
      cout<<a-b<<endl;  
}
else {
    if(a*b==c)
    cout<<"Yes"<<endl;
    else
    cout<<a*b<<endl;
}


return 0;   
}