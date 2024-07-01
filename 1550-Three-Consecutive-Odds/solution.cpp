#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


bool Solution::threeConsecutiveOdds(vector<int>& arr) {
	int oddCount = 0;
	for (auto num: arr) {
		if (num % 2 == 0) {
			oddCount = 0;
		} else {
			oddCount++;
		}
		if (oddCount == 3) {
			return true;
		}
	}
	return false;
}
