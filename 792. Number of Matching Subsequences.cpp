class Solution {
public:
    int isSub(string& a,string b){
        int m=a.length();
        int n=b.length();
        int i=0,j=0;
        while(i<m&&j<n){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return (j==n);
    }
    int numMatchingSubseq(string S, vector<string>& words) {
        int k=0;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(isSub(S,it->first)){
                k+=it->second;
            }
        }
        return k;
    }
};
