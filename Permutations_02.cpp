//non-recursion
//swap
//the size of res is just from n,n(n-1),n(n-1)(n-2),to...n!
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		res.push_back(nums);
		vector<int> tmp;
		for(int start = 0; start < nums.size(); start++){
			for(int l = res.size()-1; l >= 0; l--){
				for(int i = start+1; i < nums.size(); i++){
					tmp = res[l];
					swap(tmp[start],tmp[i]);
					res.push_back(tmp);
				}
			}
		}
		return res;
	}
};
