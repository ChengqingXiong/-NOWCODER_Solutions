// Solution 1 Two ptr Solution
// Time:5ms  Space:476K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)
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
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		//
		if (pHead == nullptr || pHead->next == nullptr) return nullptr;
		ListNode* fast = pHead->next->next;
		ListNode* slow = pHead->next;
		// Find the meeting point of two ptr;
		// If no loop found, return nullptr.
		// Using two ptr with different speed:
		// The fast one moves 2 nodes each time;
		// The slow one moves 1 node each time.
		while (fast != slow)
		{
			if (fast != nullptr && slow != nullptr)
			{
				fast = fast->next->next;
				slow = slow->next;
			}
			else
				return nullptr;
		}
		// Find the entry node of the loop.
		// Using two ptr with the same speed:
		// One starts from the first node;
		// The other continues.
		fast = pHead;
		while (fast != slow)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};

int main()
{
	ListNode* head = new ListNode(5);
	ListNode* secondPtr = new ListNode(2);
	ListNode* thirdPtr = new ListNode(0);
	ListNode* fourthPtr = new ListNode(1);
	head->next = secondPtr;
	secondPtr->next = thirdPtr;
	thirdPtr->next = fourthPtr;
	fourthPtr->next = secondPtr;
	Solution s;
	cout << "The entry node of loop is " << s.EntryNodeOfLoop(head)->val << endl;
}
