class Solution {
public:
    string multiply(string num1, string num2) {
        
        
        if(num1=="0"||num2=="0") return "0";
        if(num1=="1") return num2;
        if(num2=="1")return num1;
        string ans="";
        
        vector<int> v(num1.size()+num2.size(),0);
        
        
        for(int i=num1.size()-1;i>=0;i--){
    
            int carry=0;
            for(int j=num2.size()-1;j>=0;j--){
                int n1=num1[i]-'0';
                int n2=num2[j]-'0';
                
                
                int n=(n1*n2)+v[i+j+1];
                
                v[i+j+1]=n%10;
                v[i+j]+=n/10;
                
            }
        }
        
        int i=0;
        if(v[0]==0){
            i=1;
        }
        for(;i<v.size();i++){
            string s=to_string(v[i]);
            ans+=s;
        }
        return ans;
    }
};
