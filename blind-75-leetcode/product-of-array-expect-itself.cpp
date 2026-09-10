
using namespace std;
#include<bits/stdc++.h>

// nums=[1,2,3,4] , output [24 , 12 , 8 , 6]
// pfx=[1,1,2,6]
// sufx=[24,12,4,1]

vector<int>productExpectSelf(vector<int>&nums)
{
   int n=nums.size();
   vector<int>prfx(n),sufx(n);

   prfx[0]=1;
   sufx[n-1]=1;

   for(int i=0;i<n;i++)
    {
        prfx[i]=prfx[i-1]*nums[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        sufx[i]=sufx[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++)
     {
        nums[i]=pfx[i]*sufx[i];
     }

     return nums;

}

