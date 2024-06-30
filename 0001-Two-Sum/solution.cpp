#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> numIndexMap;
	for (int i=0; i<nums.size(); i++) {
		if (numIndexMap.find(target-nums[i]) != numIndexMap.end()) {
			return {numIndexMap[target-nums[i]], i};
		}
		numIndexMap[nums[i]] = i;
	}
	return {};
}
