#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<int> arr = {2, 6, 4, 1};
    bool result = Solution().threeConsecutiveOdds(arr);
    int expected = false;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    bool result = Solution().threeConsecutiveOdds(arr);
    int expected = true;
    BOOST_CHECK_EQUAL(result, expected);
}
BOOST_AUTO_TEST_SUITE_END()