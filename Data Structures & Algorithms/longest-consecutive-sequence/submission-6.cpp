class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> st(nums.begin(), nums.end());
        int len = 0;
        if(nums.empty()) return 0 ;
        for (int right = 0; right < nums.size(); right++) {
            int curr = nums[right] ;
            if(!st.contains(nums[right] - 1) ){
                int current = 1 ;
                while(st.contains(curr + 1)){
                    current++;
                    curr++;
                }
                len = std::max(current , len );
            }
        }
        return len;
    }
};
