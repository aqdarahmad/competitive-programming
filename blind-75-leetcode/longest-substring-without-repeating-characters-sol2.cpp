

int longestsubstring(string s)
 {
    vector<bool>seen(128,false);

    int l=0;
    int ans=0;

    for(int i=0;i<s.size();i++)
     {
        while(seen[s[i]])
        {
            seen[s[l]]=false;
            l++;
        }
        seen[s[i]]=true;
        ans=max(and,r-l+1);
     }
     return ans;
 }