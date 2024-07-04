#ifndef SOLUTION_2181
#define SOLUTION_2181

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x): val(x), next(nullptr) {}
	ListNode(int x, ListNode *next): val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeNodes(ListNode* head);
};

#endif