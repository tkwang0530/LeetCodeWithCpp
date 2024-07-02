#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> result = Solution().intersect(nums1, nums2);
    vector<int> expected = {2,2};

    // Sort both vectors before comparison
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_CASE(PlainTest2)\
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> result = Solution().intersect(nums1, nums2);
    vector<int> expected = {4,9};

    // Sort both vectors before comparison
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());

    BOOST_CHECK_EQUAL(result.size(), expected.size());
    BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()