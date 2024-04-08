/* Tabulation
The tabulation solution eliminates recursion and uses a bottom-up approach to solve the problem iteratively. It creates a DP table (dp) of size n+1 to store the number of ways to reach each step. The base cases (0 and 1 steps) are initialized to 1 since there is only one way to reach them. Then, it iterates from 2 to n, filling in the DP table by summing up the values for the previous two steps. Finally, it returns the value in the last cell of the DP table, which represents the total number of ways to reach the top.

*/

class Solution {
	public:
		int climbStairs(int n) {
			if (n == 0 || n == 1) {
				return 1;
			}

			// create vector with length: n+1, because at least need last index for saving sum up of dp[n-1] and dp[n-2]
			vector<int> dp(n+1);
			dp[0] == dp [1] == 1;

			for (int i = 1; i <= n; i++) {
				dp[i] = dp[n-1] + dp [n-2];
			}
			return dp[n];
		}
};
