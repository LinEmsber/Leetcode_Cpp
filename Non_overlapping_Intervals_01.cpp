class Solution {
public:
    // Compare function for sort
    static bool compare(vector<int>& a, vector<int>& b) {
        if (a[1] == b[1])
            return a[0] < b[0];
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        // // Printing the 2D vector
        // for (const auto &row : arr) {
        //     for (int element : row) {
        //         std::cout << element << " ";
        //     }
        //     std::cout << std::endl;
        // }

        sort(arr.begin(), arr.end(), compare);
        int length = arr.size();
        // // Printing the 2D vector
        // for (const auto &row : arr) {
        //     for (int element : row) {
        //         std::cout << element << " ";
        //     }
        //     std::cout << std::endl;
        // }

        int count = 1;                // count non-overlapping interval
        int tmp_end = arr[0][1]; // end of interval

        for (int i = 1; i < length; i++) {
            // if the current start is larger than tmp end of interval
            if (arr[i][0] >= tmp_end) {
                count++;
                tmp_end = max(tmp_end, arr[i][1]);
            }
        }

        return length - count;
    }
};
