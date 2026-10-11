using namespace std;
#include<bits/stdc++.h>
vector<int>nums;

int maxsubarray(vector<int>& nums)
{
    int cur1=nums[0];
    int best=nums[0];

    for(int i=0;i<nums.size();i++)
     {
        

        cur1=max(nums[i],cur1+nums[i]);
        best=max(best,cur1);

     }
     return best;
}

int main()
{
int n;
cin>>n;
nums.resize(n);
for(int i=0;i<nums.size();i++)
 cin>>nums[i];

cout<<maxsubarray(nums)<<endl;

return 0;    
}