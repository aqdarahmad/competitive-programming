class Solution {
public:
    string longestPalindrome(string s) {
      
        int l;
        int r;
        string rslt= "";
        for(int i=0;i<s.size();i++)
         {
                  l=i;
                  r=i;

                  while(l>=0 && r<s.size() && s[l]==s[r])
                   {
                       if(r-l+1 > rslt.size())
                         rslt=s.substr(l,r-l+1);  
                      l--;
                      r++;
                   }
                      l=i;
                      r=i+1;

                  while(l>=0 && r<s.size() && s[l]==s[r])
                   {
                          if(r-l+1 > rslt.size())
                           rslt=s.substr(l,r-l+1);    
                      l--;
                      r++;
                   }



         }

       
      
          return rslt;


        
    }
};