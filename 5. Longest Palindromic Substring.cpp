class Solution {
public:
    string longestPalindrome(string s) {
    string s1=s;
    reverse(s.begin(),s.end());
    string s2=s;
    int n=s1.length();
    int m=s2.length();    
    int tmp[n+1][m+1];
    int len=0,pos=0;    
    for(int i=0;i<=n;i++){
        tmp[i][0]=0;
    }
    for(int i=1;i<=m;i++){
        tmp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                tmp[i][j]=1+tmp[i-1][j-1];
                if((tmp[i][j]>len)&&(i+j==n+tmp[i][j])){
                    len=tmp[i][j];
                    pos=i;
                }
            }
            else{
                tmp[i][j]=0;
            }
        }
    }
    string result=s1.substr(pos-len,len);
    return result;
    }
};
