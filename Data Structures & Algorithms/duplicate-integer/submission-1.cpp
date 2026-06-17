class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int ,int> mp ; 
        bool state = false ; 
        for(int num : nums){
            mp[num]++;
        }
        for(auto num : mp){
            if(num.second > 1){
                state = true ; 
                break ; 
            }
        }
        return state ;
    }
};