#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    vector<string> grid = {" /", "/ "};
    int result = Solution().regionsBySlashes(grid);
    int expected = 2;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    vector<string> grid = {" /", "  "};
    int result = Solution().regionsBySlashes(grid);
    int expected = 1;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_CASE(PlainTest3)
{
    vector<string> grid = {"/\\", "\\/"};
    int result = Solution().regionsBySlashes(grid);
    int expected = 5;
    BOOST_CHECK_EQUAL(result, expected);
}

BOOST_AUTO_TEST_SUITE_END()