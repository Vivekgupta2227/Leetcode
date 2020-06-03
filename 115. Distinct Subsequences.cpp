class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        long long tmp[n+1][m+1];
        for(int i=0;i<=n;i++){
            tmp[i][0]=1;
        }
        for(int i=1;i<=m;i++){
            tmp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    tmp[i][j]=tmp[i-1][j]+tmp[i-1][j-1];
                } 
                else{
                    tmp[i][j]=tmp[i-1][j];
                }
            }       
        }
        return tmp[n][m];
    }
};
