class Solution {
public:
    bool dfs(int j1,int j2,int j,int t,vector<int>&v){
        if(j>j1+j2||j<0||v[j]==1) return false;
        v[j]=1;
        if(j==t) return true;
        
        bool a=dfs(j1,j2,j+j1,t,v);
        bool b=dfs(j1,j2,j+j2,t,v);
        bool c=dfs(j1,j2,j-j1,t,v);
        bool d=dfs(j1,j2,j-j2,t,v);
        
        return a||b||c||d;
    }
    bool canMeasureWater(int j1, int j2, int t) {
        vector<int> v(j1+j2+1,0);
        return dfs(j1,j2,0,t,v);
        
    }
};