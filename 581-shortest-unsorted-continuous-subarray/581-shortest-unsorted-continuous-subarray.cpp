class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        int s=v.size(),e=0;
        for(int i=0;i<nums.size();i++){
            if(v[i]!=nums[i]){
                s=min(s,i);
                e=max(e,i);
            }
        }
        
        return (e-s>=0?e-s+1:0);
    }
};