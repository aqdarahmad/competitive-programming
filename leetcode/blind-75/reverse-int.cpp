

using namespace std;

#include<bits/stdc++.h>

int reverse(int x)
{
    bool neg=false;

    if(x<0)
     neg=true;
   
    string s= to_string(x);
    long long z=stoll(s);
    
    if(neg)
     z=-z;
   if(z>INT_MAX || z<INT_MIN)
    return 0;
  
    return (int)z;
}