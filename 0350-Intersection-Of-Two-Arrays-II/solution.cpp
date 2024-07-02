#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2) {
	unordered_map<int,int> freq;
        vector<int> output;
        for (auto num: nums1) {
            freq[num]++;
        }
        for (auto num: nums2) {
            if (freq[num] > 0) {
                freq[num]--;
                output.push_back(num);
            }
        }
        return output;
}
