class Solution {
public:
    int candy(vector<int>& ratings) {
        
        priority_queue<pair<int,int>> pq;
        int n=ratings.size();
        for(int i=0;i<n;i++){
            pq.push({-ratings[i],i});
        }
        
        vector<int> v(n,1);
        
        int ans=0;
        while(!pq.empty()){
            
            pair<int,int> p=pq.top();
            pq.pop();
            int index=p.second;
           
            if(index==n-1 ){
                if(index-1>=0&&ratings[index-1]<ratings[index])
                v[index]=v[index-1]+1;
                
            }else if(index==0 ){
                if(index+1<n&&ratings[index+1]<ratings[index])
                v[index]=v[index+1]+1;
            }else{
                 cout<<index<<endl;
                if((ratings[index-1]<ratings[index])&&(ratings[index+1]<ratings[index])){
                    v[index]=max(v[index-1],v[index+1])+1;
                }
                else if(ratings[index-1]<ratings[index]){
                    v[index]=v[index-1]+1;
                }else if(ratings[index+1]<ratings[index]){
                    v[index]=v[index+1]+1;
                }
            }
            
            
        }
        
        for(int it:v) ans+=it;
        return ans;
        
    }
};