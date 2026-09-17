class Solution {
public:
    string longestPalindrome(string s) {
        vector<string>v;
        int l;
        int r;

        for(int i=0;i<s.size();i++)
         {
                  l=i;
                  r=i;

                  while(l>=0 && r<s.size() && s[l]==s[r])
                   {
                       v.push_back(s.substr(l,r-l+1));     
                      l--;
                      r++;
                   }
                      l=i;
                      r=i+1;

                  while(l>=0 && r<s.size() && s[l]==s[r])
                   {
                       v.push_back(s.substr(l,r-l+1));     
                      l--;
                      r++;
                   }



         }

         string rslt= "";
         for(int i=0;i<v.size();i++)
          {
                     if(v[i].size()>rslt.size())
                       rslt=v[i];
          }

          return rslt;


        
    }
};