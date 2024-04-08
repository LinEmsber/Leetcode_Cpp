/* Space Optimization
The space-optimized solution further reduces the space complexity by using only two variables (prev and curr) instead of an entire DP table.
*/

class Solution {
	public:
		int climbStairs(int n) {
			if (n == 0 || n == 1) {
				return 1;
			}

			int curr = 1, prev = 1;
			for (int i = 2; i <= n; i++) {
				int tmp = curr;
				// dp[n] =  dp[n-2] + dp[n-1]
				curr = prev + curr;
				prev = tmp;
			}
			return dp[n];
		}
};
