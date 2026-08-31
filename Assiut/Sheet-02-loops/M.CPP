using namespace std;
#include <bits/stdc++.h>
 
 
int main() {
long long a,b;
cin>>a>>b;
bool found = false;
for(int i=a;i<=b;i++)
{
 long long x=i;
 bool flag=true;
 while(x!=0)
 {
     long long d=x%10;
     if(d!=4 && d!=7)
     {
         flag=false;
     }
     x /= 10;
 }
 if(flag){
     found=true;
 cout<<i<<" ";
 //return 0;
 }
}
if(!found)
 cout<<-1<<endl;
 
    return 0;
}