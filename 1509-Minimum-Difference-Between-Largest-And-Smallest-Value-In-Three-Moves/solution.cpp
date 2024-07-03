#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::minDifference(vector<int>& nums) {
	if (nums.size() <= 4) {
		return 0;
	}
	sort(nums.begin(), nums.end());
	int left = 0;
	int right = nums.size() - 1;
	int minDiff = nums[right] - nums[left];
	for (int popLeftCount = 0; popLeftCount < 4; popLeftCount++) {
		minDiff = min(minDiff, nums[right-popLeftCount] - nums[left+popLeftCount]);
	}
	return minDiff;
}
