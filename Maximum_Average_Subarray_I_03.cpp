class Solution {
	public:
		double findMaxAverage(vector<int>& nums, int k) {
			int i = 0, j = 0, sum = 0, maxsum = 0;

			// Get the first window
			for (; i < k; i++) sum += nums[i];
			maxsum = sum;

			// Iterate element to slide window
			for (j = 0; i < nums.size(); i++, j++) {
				sum = sum + nums[i] - nums[j];
				if (maxsum < sum) maxsum = sum;
			}

			// Convert final value to double data type
			return ((double)(maxsum)) / k;
		}
};
