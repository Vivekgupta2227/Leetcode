class Solution {
public:
    string countAndSay(int n) {
        string s1;
        if(n==1){
            return "1";
        }
        string s=countAndSay(n-1);
        int c=0;
        for(int i=0;i<s.length();i++){
            c++;   
            while(s[i]==s[i+1]){
                c++;
                i++;
            }
            s1+=to_string(c)+s[i];
            c=0;
        }
    return s1; 
    }
};
