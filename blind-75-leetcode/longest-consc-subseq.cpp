

int longestConsecutive(vector<int>& nums)
{  if(nums.size()==0)
     return 0;
    set<int>st;
    set<int>st2;

    for(int x:nums)
     st.insert(x);

    
    vector<int>v;
    
    for(auto is:st)
     v.push_back(is);

   int len=1;
   
   for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]+1)
         {
            len++;
         }
         else 
          {
            st2.insert(len);
            len=1;
          }
    }
    st2.insert(len);

    return *st2.rbegin();

     
}