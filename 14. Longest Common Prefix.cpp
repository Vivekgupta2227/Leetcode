class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.empty()){
            return "";
        }
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].length();i++){
            if(strs[0].at(i)!=strs[strs.size()-1].at(i)){
                break;
            }
            else{
                s+=strs[0].at(i);
            }
        }
        return s;
    }
};
