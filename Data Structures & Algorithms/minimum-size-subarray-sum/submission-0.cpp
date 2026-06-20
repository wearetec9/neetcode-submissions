class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0 ; 
        int len = INT_MAX ; 
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ;i++){
            sum += nums[i];
            while(sum >= target){
                int l = i - left +1 ;
                len = std::min(l ,len);
                sum-=nums[left];
                left++;
            }
        }
        if(len == INT_MAX){
            return 0;
        }else{
            return len;
        }
    }
};