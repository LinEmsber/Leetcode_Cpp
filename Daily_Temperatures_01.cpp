class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans (n, 0);

        stack<int> st;
        st.push(0);

        int i=1;
        while (i<n) {
            if (!st.empty() && temperatures[i] <= temperatures[st.top()]) {
                st.push(i);
            }
            else {
                while (!st.empty() && temperatures[st.top()] < temperatures[i]) {
                    ans[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
            i++;
        }
        return ans;
    }
};
