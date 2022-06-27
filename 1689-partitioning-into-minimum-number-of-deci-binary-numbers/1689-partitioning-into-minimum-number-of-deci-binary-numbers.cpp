class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        // queue<int> q;
        for(auto it:n){
            ans=max(ans,it-'0');
        }
//         q.push(INT_MAX);
//         while(!q.empty()){
//             int top=q.front(); q.pop();
//             cout<<top<<endl;
//             if(top==INT_MAX){
//                 ans++;
//                 if(!q.empty()) q.push(INT_MAX);
//                 continue;
//             }
                
//             if(top-1!=0){
//                 q.push(top-1);
//             }
            
//         }
        return ans;

    }
};