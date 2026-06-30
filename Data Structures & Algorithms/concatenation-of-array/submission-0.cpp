class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans ; 
        int k =0 ; 
        while(k < 2){
            for(int i = 0 ; i < nums.size();i++){
                ans.push_back(nums[i]);
            }
            k++;
        }
        return ans;
    }
};