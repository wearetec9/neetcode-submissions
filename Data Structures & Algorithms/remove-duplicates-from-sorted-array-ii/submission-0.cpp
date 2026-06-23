class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0 ; int right = 0 ; int min = 0;
        while(right < nums.size()){
            int cnt = 1 ;
            while(right + 1 < nums.size() && nums[right] == nums[right+1]){
                cnt++;
                right++;
            }
            min = std::min(2,cnt);
            for(int i = 0 ; i < min;i++){
                nums[left] = nums[right];
                left++;
            }
            right++;
        } 
        return left;
        
    }
};