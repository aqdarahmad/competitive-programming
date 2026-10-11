class Solution {
public:


   void dfs(vector<vector<char>>&grid, int l , int r)
   {
    int m=grid.size();
    int n=grid[0].size();

    if(l>=m || l<0)
      return;
    if(r>=n || r<0)
     return;

    if(grid[l][r]=='0')
      return;

    grid[l][r]='0';

    dfs(grid,l-1,r);
    dfs(grid,l+1,r);
    dfs(grid,l,r+1);
    dfs(grid,l,r-1);

        
   }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int count=0;

        for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
             {
                if(grid[i][j]=='1')
                 {
                    count++;
                    dfs(grid,i,j);
                 }
             }
         }
        
        return count;
    }
};