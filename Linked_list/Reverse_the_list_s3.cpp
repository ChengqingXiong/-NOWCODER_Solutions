// Solution 3 Reverse Vector Solution
// Time:3ms  Space:484K
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
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> tail_to_head;
        // save the list in the vector in normal order
		while (head != nullptr)
		{   
			tail_to_head.push_back(head->val);
			head = head->next;
		}
		// reverse the vector
		int i = 0;
		int j = tail_to_head.size() - 1;
		int temp;
		while (i < j) 
		{   
			temp = tail_to_head.at(i);
			tail_to_head.at(i) = tail_to_head.at(j);
			tail_to_head.at(j) = temp;
			i++;
			j--;
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