class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0 ; 
        int len =0 ; 
        for(int right = 0 ; right < nums.size();right++){
            if(nums[right] == 0){
                left = right +  1;
            }
            else{
                int l = right - left + 1;
                len = std::max(l,len);
            }
        }
        return len;
    }
};