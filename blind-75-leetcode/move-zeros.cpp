class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int>v;
        stack<int>st;
        deque<int>dq;

        for(int x:nums)
         {
            if(x==0)
             {
                c++;
             }
             else
             st.push(x);
              
         }
         while(!st.empty())
          {

              dq.push_front(st.top());
              st.pop();
          }
          while(c!=0)
           {
            dq.push_back(0);
             c--;
           }

           while(!dq.empty())
            {
                v.push_back(dq.front());
                dq.pop_front();
            }

            nums=v;


        
    }
};