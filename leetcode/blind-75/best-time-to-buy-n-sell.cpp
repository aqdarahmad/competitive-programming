using namespace std;
#include<bits/stdc++.h>



int maxprofit(vector<int>&prices)
{
    int mn=INT_MAX;
    int mx=0;

    for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mn){
             mn=prices[i];
            }
                int oldp=prices[i]-mn;
                mx=max(mx,oldp);
        }
    




    return mx;
}