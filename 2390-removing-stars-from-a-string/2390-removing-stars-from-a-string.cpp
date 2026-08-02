class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] != '*')
            {
                st.push(s[i]);
            }
            if(s[i] == '*')
            {
                st.pop();
            }
        }
        vector<char> c;

    while(!st.empty())
    {
        c.push_back(st.top());
        st.pop();
    }
    reverse(c.begin() , c.end());
    
    return string(c.begin(), c.end());
    }
};