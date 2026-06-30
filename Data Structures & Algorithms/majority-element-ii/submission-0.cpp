class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::vector<int> v ; 
        std::unordered_map<int,int> mp ; 
        for(int num : nums){
            mp[num]++;
        }
        for(auto const& pairs : mp){
            int number = pairs.first;
            int freq = pairs.second;
            if(freq > nums.size()/3){
                v.push_back(number);
            }
        }
        return v ; 
    }
};