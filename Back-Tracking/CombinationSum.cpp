template<typename t>
class Solution {
public:
    void helper(vector<int> arr, int target,vector<vector<int>>& v,vector<int>hel,int start) {
        if(target<0){
            if(hel.size()>=1){
                hel.pop_back();
            }
            return ;
            
        }
        if(target==0){
            v.push_back(hel);
            hel.clear();
            return;
        }
        for(int i=start;i<arr.size();i++){
            hel.push_back(arr[i]);
            helper(arr,target-arr[i],v,hel,i);
            hel.pop_back();
        }
        return ;
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>hel;
        helper(candidates,target,v,hel,0);
        return v;
    }
};