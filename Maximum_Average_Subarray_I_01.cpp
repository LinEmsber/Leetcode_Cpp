class Solution {
	public:
		double findMaxAverage(vector<int>& nums, int k) {
			int i = 0, j = 0;
			double sum = 0, max_avg = INT_MIN;
			while (j < nums.size()) {
				sum += nums[j];

				// iterate to get the first window
				if (j - i + 1 < k) {
					j++;
				}
				else if (j - i + 1 == k) {
					// check is it the new max average
					max_avg = max(max_avg, sum / k);
					// move window
					sum -= nums[i];
					i++;
					j++;
				}
			}
			return max_avg;
		}
};
