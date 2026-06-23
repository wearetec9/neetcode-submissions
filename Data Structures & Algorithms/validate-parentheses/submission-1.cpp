class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st ;
        for(int i =0 ; i < s.length(); i++){
            char curr = s[i];
            if(curr == '(' || curr == '{' || curr == '[') st.push(curr);
            else{
                char top = st.top();
                if(st.empty()) return false;
                if(!st.empty()){
                    if((top == '(' && curr == ')') || (top == '{' && curr == '}') || (top == '[' && curr == ']')) st.pop();
                    else{
                        st.push(curr);
                    } 
                }
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};
