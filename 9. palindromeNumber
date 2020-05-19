class Solution {
public:
    int reverse(int x){
        int y=0;
    int n;
    while( x != 0){
        n = x%10;
        if (y > 2147483647/10 || y < (-2147483647-1)/10){
             return false;
        }
        y = y*10 + n;
        x /= 10;
    }
    return y; 
    }
    bool isPalindrome(int x) {
       if(x<0)return false;
       return x==reverse(x); 
    }
};
