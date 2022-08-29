class Solution {
public:
    bool isValid(string s) {
            stack<char> st;
            
            for(auto itr : s)
            {
                    if(itr == '(' || itr == '{' || itr == '[')
                            st.push(itr);
                    
                    else
                    {
                            if(st.empty() || ( st.top() == '{' && itr != '}') || ( st.top() == '(' && itr != ')') || ( st.top() == '[' && itr != ']'))
                                    return false;
                            st.pop();
                    }
            }
           return st.empty();
    }
};