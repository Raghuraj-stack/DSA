class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char c : num) {
            while (!st.empty() && st.top() > c && k > 0) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string s;
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }

        reverse(s.begin(), s.end());

        int pos = 0;
        while (pos < s.size() && s[pos] == '0')
            pos++;

        s = s.substr(pos);

        return s.empty() ? "0" : s;
    }
};