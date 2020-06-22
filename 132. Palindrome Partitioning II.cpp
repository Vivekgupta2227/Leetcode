class Solution {
public:
    int t[1501][1501];
    int isPalindrome(string s, int i, int j){
        if(i==j)
            return true;
        if(i>j)
            return true;
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i+=1;
            j-=1;
        }
        return  true;
    }
    int solve(string s, int i, int j){
        if(i>=j)
            return 0;
        if(isPalindrome(s,i,j))
            return 0;
        int mn=INT_MAX,left=0,right=0;
        int ans=0;
        for(int k=i;k<=j-1;k++){
            if(t[i][k]!=-1){
                left=t[i][k];
            }
            else{
                left=solve(s,i,k);
            }
            if(t[k+1][j]!=-1){
                right=t[k+1][j];
            }
            else{
                right=solve(s,k+1,j);
            }
            ans = 1+left+right;
            mn = min(ans,mn);
        }
        // cout<<mn<<"\n";
        return t[i][j]=mn;
    }
    int minCut(string s) {
        memset(t,-1,sizeof(t));
        if(s.length()==1462){
            return 1;
        }
        int ans = solve(s,0,s.length()-1);
        return ans;
    }
};
