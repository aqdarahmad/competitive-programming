using namespace std;
#include<bits/stdc++.h>
vector<int>nums;

int maxProduct(vector<int>& nums)
{
    int cur1=nums[0];
    int cur2=nums[0];
    int best=nums[0];

    for(int i=1;i<nums.size();i++)
     {
        int old1=cur1;
        int old2=cur2;

        cur1=max({nums[i],nums[i]*old1,nums[i]*old2});
        cur2=min({nums[i],nums[i]*old1,nums[i]*old2});


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

cout<<maxProduct(nums)<<endl;

return 0;    
}