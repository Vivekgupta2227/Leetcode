class Solution {
public:
    int change(int amount, vector<int>& coins) {
    int n=coins.size();
    int tmp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        tmp[i][0]=1;
    }
    for(int i=1;i<=amount;i++){
        tmp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]>j){
                tmp[i][j]=tmp[i-1][j];
            }
            else{
                tmp[i][j]=tmp[i-1][j]+tmp[i][j-coins[i-1]];
            }
        }
    }
    return tmp[n][amount];
    }
};
