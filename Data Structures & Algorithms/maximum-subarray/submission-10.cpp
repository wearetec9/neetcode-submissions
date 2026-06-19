class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =nums[0] ;
        int left = 0 ;
        int sum = 0 ; 
        if(nums[0] == 0 && nums.size() <=1){
            return 0 ;
        }
        if(nums[0]  < 0 &&  nums.size() <=1 ){
            return -1;
        }
        
        for(int right =0 ; right < nums.size(); right++){
            if(sum < 0){
                sum = 0 ; 
            }   
            sum += nums[right];
            maxSum = max(maxSum,sum);
        }        
        return maxSum ; 
    }
};
