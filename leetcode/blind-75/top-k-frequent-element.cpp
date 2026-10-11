using namespace std;
#include<bits/stdc++.h>
// time complixity o(n+mlog m);
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int>;
        vector<int>rslt;

        for(int i=0;i<nums.size();i++)
         {
            mp[nums[i]]++;
         }

         vector<pair<int,int>>v;

         for(auto [num,count]:mp)
          {
            v.push_back({num,count});
          }

          sort(v.begin(),v.end(),[](auto a , auto b){
            return a.second>b.second;
          });

          for(int i=0;i<k;i++)
           {
              rslt.psuh_back(v[i].first);
           }

           return rslt;
        
    }
};