class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> st;
        int left = 0 ; 
        int len = INT_MIN;
        if(s.empty()) return 0;
        for(int i = 0 ; i < s.length();i++){
            char curr = s[i];
            while(st.contains(curr)){
                st.erase(s[left]);
                left++; 
            }
        
            int l = i - left+ 1;
            len = std::max(l ,len);
            
            st.insert(s[i]);

        }
        return len ;
    }
};
