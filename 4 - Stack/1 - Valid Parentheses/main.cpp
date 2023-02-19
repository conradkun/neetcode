class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto&c: s){
            if (isOpen(c)) st.push(c);
            else {
                if (st.empty()) return false;
                if (isMatch(st.top(), c)) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
    bool isOpen(char& c){
        if (c == '(' | c == '{' | c == '[') return true;
        return false;
    }
    bool isMatch(char& c, char& d){
        if (c == '(' & d == ')') return true;
        if (c == '[' & d == ']') return true;
        if (c == '{' & d == '}') return true;
        return false;
    }
};