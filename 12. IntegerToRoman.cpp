class Solution {
public:
    string intToRoman(int num) {
        int integer[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        if(num<1){
            return NULL;
        }
        string s="";
        for(int i=0;i<13;i++){
            int q=num/integer[i];
            while(q>0){
                s=s+roman[i];
                q--;
            }
            num=num%integer[i];
        }
        return s;
    }
};
