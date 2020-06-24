class Solution {
public:
    unordered_map<string,int>mp;
    bool solve(string a,string b){
        if(a.compare(b)==0){
            return true;
        }
        if(a.length()<=1){
            return false;
        }
        string temp=a;
        temp.push_back(' ');
        temp.append(b);
        if(mp.find(temp)!=mp.end()){
            return mp[temp];
        }
        bool flag=false;
        int n=a.length();
        for(int i=1;i<n;i++){
            if(((solve(a.substr(0,i),b.substr(n-i,i))==true)&&(solve(a.substr(i,n-i), b.substr(0,n-i))==true))
               ||
               ((solve(a.substr(0,i),b.substr(0,i))==true)&&(solve(a.substr(i,n-i),b.substr(i,n-i))==true))){
                flag=true;
                break;
            }
        }
                mp[temp]=flag;
                return mp[temp];               
    }
    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length()){
            return false;
        }
        if(s1==""&&s2==""){
            return true;
        }
        return solve(s1,s2);
    }
};
