class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=nums.size();
        while(c--){

      for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]==0)
         {
        //    int t=nums[nums.size()-1];
            int t2=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=t2;
         }
       }
        }
        
    }
};
// time complixity o(n2) ,,,,