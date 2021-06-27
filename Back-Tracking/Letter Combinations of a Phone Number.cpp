template <typename t>
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            vector<string>sm;
            sm.push_back("");
            return sm;
        }
        vector<string>sm=letterCombinations(digits.substr(1));
        string mapp[10];
         
        mapp[2]="abc";
        mapp[3]="def";
        mapp[4]="ghi";
        mapp[5]="jkl";
        mapp[6]="mno";
        mapp[7]="pqrs";
        mapp[8]="tuv";
        mapp[9]="wxyz";
        vector<string>finalAns;
        for(int i=0;i<mapp[digits[0]].length();i++){
            for(int j=0;j<sm.size();j++){
                finalAns.push_back(sm[j]+mapp[digits[0]][i]);
            }
        }
       return finalAns;
    }
};