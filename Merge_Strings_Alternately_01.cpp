class Solution {
	public:
		string mergeAlternately(string word1, string word2) {
			std::string result;
			auto str1 = word1.begin();
			auto str2 = word2.begin();
			while ( str1 != word1.end() || str2 != word2.end() ) {
				if (str1 != word1.end()) result.push_back(*str1++);
				if (str2 != word2.end()) result.push_back(*str2++);                  
			}
			return result;
		}                                                         
};                   
