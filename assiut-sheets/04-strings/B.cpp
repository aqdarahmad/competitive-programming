using namespace std;
#include<bits/stdc++.h>


int main()
{
string s;
getline(cin,s);

for(char ch :s)
{
    if(ch=='\\')
     return 0;
   cout<<ch;  
}

return 0;    
}