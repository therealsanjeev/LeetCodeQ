class Solution {
    static bool comp(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        sort(trips.begin(),trips.end(),comp);
        priority_queue<pair<int,int>> pq;
        for(auto it:trips){
            pq.push({-1*it[2],it[0]});
        }
        int curr=0;
        for(auto it:trips){
            curr+=it[0];
            while(it[1]>=(-1*pq.top().first)){
                curr-=pq.top().second;
                pq.pop();
            }
            if(curr>capacity) 
                return false;
        }
        
        return true;
    }
};