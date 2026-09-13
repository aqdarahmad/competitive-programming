using namespace std;

#include<bits/stdc++.h>


vector<vector<string>>groupanagram(vector<string>strs)
{
    vector<vector<string>>rslt;

    unordered_map<string,vector<string>>mp;


    for(string s: strs)
     {
        string key=s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
     }

     for(auto it:mp)
      rslt.push_back(it.second);


      return rslt;
}