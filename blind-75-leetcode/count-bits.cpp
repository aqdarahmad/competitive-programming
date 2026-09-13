
#include<bits/stdc++.h>
using namespace st;
vector<int>countbits(int n)
 { vector<int>v;

    for(int i=0;i<=n;i++)
     {
        int count=0;
        for(int j=0;j<32;j++)
         {
            int s=(i>>j)&&1;
            if(s==1)
             count++;
         }
         v.push_back(count);
     }

     return v;
 }