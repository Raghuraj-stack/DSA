class Solution {
public:


    vector<int> nextSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            if (!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }


    vector<int> nextGreater(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;              

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            if (!st.empty())
                ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& arr) {
        int area = 0;
        
        int n = arr.size();
        vector<int> left = nextGreater(arr); 
        vector<int> right = nextSmaller(arr);
        for(int i = 0 ; i < n ; i++)
        {
            int sum = right[i] - left[i] -  1;
            area = max(area , arr[i] * sum);
        }

        return area;

    }
};