
using namespace std;

#include<bits/stdc++.h>


int longestsubstring(string s)
{
    int left=0;
    int ans=0;
    unordered_set<char>st;

    for(int r=0;r<s.size();r++)
     {
        while(st.count(s[r]))
         {
            st.erase(s[l]);
            l++;
         }
         st.insert(s[r]);
         ans=max(ans,r-l+1);
     }
     return ans;
}