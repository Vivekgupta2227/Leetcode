class Solution {
public:
     bool detectCapitalUse(string word) {
        int n=word.length();
        if(upper(0,n-1,word))
            return true;
        else if(lower(0,n-1,word))
            return true;
        else if(isupper(word[0])&&lower(1,n-1,word))
            return true;
        else
            return false;
    }
    bool lower(int l,int r,string str){
        for(int i=l;i<=r;i++){
            if(isupper(str[i]))
                return false;
        }
        return true;
    }
    bool upper(int l,int r,string st){
        for(int i=l;i<=r;i++){
            if(islower(st[i]))
                return false;
        }
        return true;
    }
};
