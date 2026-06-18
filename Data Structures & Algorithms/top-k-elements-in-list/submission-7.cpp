class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        std::vector<pair<int,int>> v;
        for(const auto& p: mp){
            v.push_back( {p.second ,p.first});
        }
        std::vector<int> v2;
        sort(v.rbegin(),v.rend());
        for(int i = 0 ; i < k ; i++){
            v2.push_back(v[i].second);
        }
        return v2 ; 

    }
};
