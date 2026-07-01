class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int r = 0 ; 
        while(r < k){
            int lastele = nums[nums.size()-1];
            int left =nums.size()-1 ;    
            for(int i =nums.size()-2 ; i>= 0;i--){
                nums[left] = nums[i]; 
                left--;   
            }
            nums[0] = lastele ; 
            r++;
        }
    }
};