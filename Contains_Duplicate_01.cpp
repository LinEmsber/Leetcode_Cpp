// Brute Force
class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			bool flag = false;
			for(int i = 0; i < nums.size(); i++){
				for(int j = i + 1; j < nums.size(); j++){
					if(nums[i] == nums[j])
						return true;
				}
			}
			return flag;
		}
};
