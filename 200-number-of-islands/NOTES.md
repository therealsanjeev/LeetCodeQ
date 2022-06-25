void dfs(vector<vector<char>>& grid,int i,int j){
if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0') return;
grid[i][j]='0';
dfs(grid,i+1,j);
dfs(grid,i,j+1);
dfs(grid,i-1,j);
dfs(grid,i,j-1);
}