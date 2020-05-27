class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    int tmp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        tmp[i][0]=0;
    }
    for(int i=1;i<=amount;i++){
        tmp[0][i]=INT_MAX-1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(j%coins[0]==0){
                tmp[i][j]=j/coins[0];
            }
            if(coins[i-1]>j){
                tmp[i][j]=tmp[i-1][j];
            }
            else{
                tmp[i][j]=min(tmp[i][j-coins[i-1]]+1,tmp[i-1][j]);
            }
        }
    }
    if(tmp[n][amount]==INT_MAX-1){
        return -1;
    }    
    else{
    return tmp[n][amount];}
    }
};
