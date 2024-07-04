#define BOOST_TEST_MODULE SolutionTest

#include "solution.hpp"

//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SolutionSuite)

string listToStr(ListNode* head) {
    string res = "";
    while (head != nullptr) {
        res += to_string(head->val);
        res += "->";
        head = head->next;
    }
    res += "None";
    return res;
}

BOOST_AUTO_TEST_CASE(PlainTest1)
{
    ListNode* head = new ListNode(0, new ListNode(3, new ListNode(1, new ListNode(0, new ListNode(4, new ListNode(5, new ListNode(2, new ListNode(0))))))));
    ListNode* result = Solution().mergeNodes(head);
    string expected = "4->11->None";
    BOOST_CHECK_EQUAL(listToStr(result), expected);
}

BOOST_AUTO_TEST_CASE(PlainTest2)
{
    ListNode* head = new ListNode(0, new ListNode(1, new ListNode(0, new ListNode(3, new ListNode(0, new ListNode(2, new ListNode(2, new ListNode(0))))))));
    ListNode* result = Solution().mergeNodes(head);
    string expected = "1->3->4->None";
    BOOST_CHECK_EQUAL(listToStr(result), expected);
}

BOOST_AUTO_TEST_SUITE_END()