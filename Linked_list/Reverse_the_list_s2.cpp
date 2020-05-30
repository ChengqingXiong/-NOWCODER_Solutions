// Solution 2 Recursive Solution
// Time:3ms  Space:608K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)
#include <iostream> 
#include <string> 
#include <vector>
using namespace std;


struct ListNode {
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	vector<int> tail_to_head;
	vector<int> printListFromTailToHead(ListNode* head) {
		if (head != nullptr)
		{   
			if (head->next != nullptr) {
				printListFromTailToHead(head->next);
			}
			tail_to_head.push_back(head->val);
		}
		return tail_to_head;
	}
};

int main()
{
	ListNode* head = new ListNode(5);
	ListNode* secondPtr = new ListNode(2);
	ListNode* thirdPtr = new ListNode(0);
	head->next = secondPtr;
	secondPtr->next = thirdPtr;
	Solution s;
	vector<int> result = s.printListFromTailToHead(head);
	for (int i = 0; i < result.size(); i++)
		cout << result.at(i) << endl;
	return 0;
}