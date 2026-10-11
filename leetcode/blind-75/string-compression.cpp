


using namespace std;
#include<bits/stdc++.h>



int stringcomperssion(vector<char>&chars)
{
    vector<char>rslt;

    for(int i=0;i<chars.size();)
    {
        char cur=chars[i];
        int count=0;

        while(i<chars.size() && cur==chars[i])
         {
            count++;
            i++;
         }

         rslt.push_back(cur);

         if(count==1)
          {
            continue;
          }
          else{
            string s = to_string(count);
            for(char d:s)
             {
                rslt.push_back(d);
             }
          }
    }
    chars=rslt;
    return chars.size();
}