#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> nums = {5, 3, 2, 4};
    bool result = Solution().minDifference(nums);
    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> nums = {1,5,0,10,14};
    bool result = Solution().minDifference(nums);
    int expected = 1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<int> nums = {3, 100, 20};
    bool result = Solution().minDifference(nums);
    int expected = 0;
    BOOST_CHECK_EQUAL(result, expected);
}
BOOST_AUTO_TEST_SUITE_END()