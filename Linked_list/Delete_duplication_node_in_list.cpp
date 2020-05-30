// Solution 1 Common Solution
// Time:5ms  Space:480K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)
#include <iostream> 
#include <string> 
#include <stack>
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
	ListNode* deleteDuplication(ListNode* pHead)
	{   
		if (pHead == nullptr || pHead->next == nullptr) return pHead;
		// Current ptr: record the non-duplicated nodes
		// Searching ptr: search the next nodes
		// Head ptr: for saving the first node of pHead
		ListNode* Head = new ListNode(0);
		Head->next = pHead;
		ListNode* Current = Head;
		ListNode* Searching = Head->next;
		while (Searching != nullptr)
		{   
			// If find duplication node, ignore them and link the
			// next non-duplicated node to the current node
			if (Searching->next != nullptr && Searching->val == Searching->next->val)
			{
				while (Searching->next != nullptr && Searching->next->val == Searching->val) Searching = Searching->next;
				Current->next = Searching->next;
				Searching = Searching->next;
			}
			else 
			{
				Current = Current->next;
				Searching = Searching->next;
			}
		}
		return Head->next;    
	}
};

int main()
{   // Should change from 5-2-2-1 to 5-1
	ListNode* head = new ListNode(5);
	ListNode* secondPtr = new ListNode(2);
	ListNode* thirdPtr = new ListNode(2);
	ListNode* fourthPtr = new ListNode(1);
	head->next = secondPtr;
	secondPtr->next = thirdPtr;
	thirdPtr->next = fourthPtr;
	fourthPtr->next = nullptr;
	Solution s;
	ListNode* result = s.deleteDuplication(head);
	while (result != nullptr) {
		cout << result->val;
		result = result->next;	 
	}
}