class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it:nums) {
             if(m[it]==0)
                 m[it]++;
            else return true;
        }
           
        return false;
    }
};