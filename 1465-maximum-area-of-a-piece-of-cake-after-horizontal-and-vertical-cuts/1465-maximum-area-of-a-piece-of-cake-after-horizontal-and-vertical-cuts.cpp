class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
int M= 10^9 + 7;
sort(horizontalCuts.begin(),horizontalCuts.end());
sort(verticalCuts.begin(),verticalCuts.end());

    int maxh= horizontalCuts[0];
    int maxv= verticalCuts[0];
    
    horizontalCuts.push_back(h);
    verticalCuts.push_back(w);
    
    
    for(int i=1;i<horizontalCuts.size();i++){
        if(horizontalCuts[i]-horizontalCuts[i-1]> maxh)
            maxh = horizontalCuts[i]-horizontalCuts[i-1];
    }
   
    for(int i=1;i<verticalCuts.size();i++){
        if(verticalCuts[i]-verticalCuts[i-1]> maxv)
            maxv = verticalCuts[i]-verticalCuts[i-1];
    }
   
    
   return (1ll*maxh*maxv) % 1000000007; 
    }
};