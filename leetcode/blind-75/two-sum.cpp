/* You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order. */


using namespace std;
#include<bits/stdc++.h>
vector<int>nums;
int n;

vector<int> twoSum(vector<int>&nums , int target)
{
   
    map<int,int>mp;

    for(int i=0;i<n;i++)
     {
        int need=target-nums[i];
        if(mp.find(need)!=mp.end())
            return {mp[need],i};

        mp[nums[i]]=i;    
     }
     return {};


}

int main(){
int target;
cin>>n>>target;
nums.resize(n);
for(int i=0;i<n;i++)
    cin>>nums[i];

 
     vector<int> result = twoSum(nums, target);
      cout << result[0] << " " << result[1] << endl;





return 0;    
}