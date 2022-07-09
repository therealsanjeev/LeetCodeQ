class Solution {
public:
        int dp[101][101][21];
    int recur(vector<int>&houses,vector<vector<int>>&cost,int m,int n,int i,int target,int color){
        if(i>=m||target<0){
            if(target==0)return 0;
            else return 1e9;
        }
        if(dp[i][target][color]!=-1)return dp[i][target][color];
        if(houses[i]!=0){
            return dp[i][target][color] = recur(houses,cost,m,n,i+1,target-(color!=houses[i]),houses[i]);
        }
        int minn = 1e9;
        for(int j = 0; j<n; j++){
            minn = min(minn,cost[i][j]+recur(houses,cost,m,n,i+1,target-(color!=j+1),j+1));
            
        }
        return dp[i][target][color] = minn;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof(dp));
        int ans = recur(houses,cost,m,n,0,target,0);
        return (ans>=1e9?-1:ans);
    }
};