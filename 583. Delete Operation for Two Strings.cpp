class Solution {
public:
    int minDistance(string word1, string word2) {
    int n=word1.length();
    int m=word2.length();    
    int tmp[n+1][m+1];
    for(int i=0;i<=n;i++){
        tmp[i][0]=0;
    }
    for(int i=1;i<=m;i++){
        tmp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(word1[i-1]==word2[j-1]){
                tmp[i][j]=1+tmp[i-1][j-1];
            }
            else{
                tmp[i][j]=max(tmp[i-1][j],tmp[i][j-1]);
            }
        }
    }
    int index=tmp[n][m];
    int total=n+m-2*index;
     return total; 
    }
};
