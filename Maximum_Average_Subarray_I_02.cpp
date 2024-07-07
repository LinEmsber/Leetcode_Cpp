class Solution {
	public:
		double findMaxAverage(vector<int>& nums, int k) {
			int i = 0, j = 0;
			double sum = 0, max_avg = INT_MIN;

			for (; j < nums.size(); j++) {
				sum += nums[j];
				// Get the first window
				if (j - i + 1 < k) {
					continue;
				}
				// Iterate element to slide window
				else if (j - i + 1 == k) {
					// Check is it the new max average
					max_avg = max(max_avg, sum / k);
					// Slide window
					sum -= nums[i++];
				}
			}
			return max_avg;
		}
};
