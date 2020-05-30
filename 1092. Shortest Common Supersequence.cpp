class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
    int n=str1.length();
    int m=str2.length();    
    int tmp[n+1][m+1];
    for(int i=0;i<=n;i++){
        tmp[i][0]=0;
    }
    for(int i=1;i<=m;i++){
        tmp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                tmp[i][j]=1+tmp[i-1][j-1];
            }
            else{
                tmp[i][j]=max(tmp[i-1][j],tmp[i][j-1]);
            }
        }
    }
    int index=tmp[n][m];
    string dp;
    int i=n,j=m;
    while(i>0&&j>0){
        if(str1[i-1]==str2[j-1]){
            dp.push_back(str1[i-1]);
            i--;
            j--;
            index--;
        }
        else{
            if(tmp[i-1][j]>tmp[i][j-1]){
                dp.push_back(str1[i-1]);
                i--;
                index--;
            }
            else{
                dp.push_back(str2[j-1]);
                j--;
                index--;
            }
        }
    }
    while(i>0){
        dp.push_back(str1[i-1]);
        i--;
        index--;
    }
    while(j>0){
        dp.push_back(str2[j-1]);
        j--;
        index--;
    }   
     reverse(dp.begin(),dp.end());   
     return dp;   
    }
};
