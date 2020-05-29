class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        int tmp[n+1][m+1];
        for(int i=0;i<=n;i++){
            tmp[i][0]=0;
        }
        for(int i=0;i<=m;i++){
            tmp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    tmp[i][j]=1+tmp[i-1][j-1];
                } 
                else{
                    tmp[i][j]=max(tmp[i-1][j],tmp[i][j-1]);
                }
            }       
        }
        return tmp[n][m];
    }
};
