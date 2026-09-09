using namespace std;
#include<bits/stdc++.h>


int main()
{

   string s1;
   cin>>s1;

   int sum=0;
   for(char ch :s1)
   {
    sum+=(ch-'0');
   }
   cout<<sum<<endl;

return 0;    
}