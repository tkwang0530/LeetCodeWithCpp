#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::lengthOfLongestSubstring(string s) {
	int n = s.length();
	int maxLength = 0;
	unordered_map<char, int> lastVisited;
	int start = 0;

	for (int end = 0; end < n; end++) {
		if (lastVisited.count(s[end]) == 0 || lastVisited[s[end]] < start) {
			lastVisited[s[end]] = end;
			maxLength = max(maxLength, end-start+1);
		} else {
			start = lastVisited[s[end]] + 1;
			lastVisited[s[end]] = end;
		}
	}
	return maxLength;
}
