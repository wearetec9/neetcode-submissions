class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> output ; 
        for(int i = 0 ; i < nums.size() ; i++){
            int mul = 1 ;
            int j = 0  ;
            while ( j < nums.size()){
                if(i == j){
                    j++;
                    continue;
                }else{
                    mul *= nums[j];
                    j++;
                }
            }
            output.push_back(mul);
            mul = 0;
        }
        return output;
    }
};
