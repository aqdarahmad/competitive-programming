class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
      
     vector<vector<bool>>grid(n,vector<bool>(n));

     int maxlen=1;
     int start=0;

     for(int i=0;i<n;i++)
      grid[i][i]=true;

    for(int i=0;i<n-1;i++)
    {
      if(s[i]==s[i+1])
       {
        grid[i][i+1]=true;
        start=i;
        maxlen=2;
       }
    } 

    for(int len=3;len<=n;len++)
     {
        for(int i=0;i+len<=n;i++)
         {
            int j=i+len-1;

            if(s[i]==s[j] and grid[i+1][j-1])
             {
                grid[i][j]=true;
                start=i;
                maxlen=len;
             }
         }
     }

     return s.substr(start,maxlen);


        
    }
};