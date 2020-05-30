// Solution 1 Stack Solution
// Time:3ms  Space:472K
// Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)
#include <iostream> 
#include <string> 
#include <stack>
#include <vector>
using namespace std;


struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
           val(x), next(NULL) {
      }
};

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> tail_to_head;
		stack<int> stk;
		while (head != NULL)
		{
			stk.push(head->val);
			head = head->next;
		}
		while (!stk.empty())
		{
			tail_to_head.push_back(stk.top());
			stk.pop();
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