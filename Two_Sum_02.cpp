class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int, int> UnorderedMap;
			int n = nums.size();

			// Build the hash table
			for (int i = 0; i < n; i++) {
				UnorderedMap[nums[i]] = i;
			}

			// Find the complement
			for (int i = 0; i < n; i++) {
				int complement = target - nums[i];
				if (UnorderedMap.count(complement) && UnorderedMap[complement] != i) {
					return {i, UnorderedMap[complement]};
				}
			}

			return {}; // No solution found
		}
};
