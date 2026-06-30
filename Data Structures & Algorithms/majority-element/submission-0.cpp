class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> mp ;
        for(int num : nums){
            mp[num]++;
        }
        int n = 0 ;
        for(auto const& pairs : mp){
            int number = pairs.first ;
            int freq = pairs.second ;
            if(freq  > nums.size()/2){
                n =  number;
            }
        }
        return n ;
    }
};