3 linked_list Questions and Solutions
====

### 1.问题:<br/>
### 输入一个链表，按链表从尾到头的顺序返回一个ArrayList。<br/>

1.Reverse the linked list <br/>

Task: printListFromTailToHead(ListNode* head) <br/>
Parameters:<br/>
&emsp;&emsp;head: the head node of the list<br/>
Return value:<br/>
&emsp;&emsp;a new list.<br/>
<br/>
  
Solution 1 Stack Solution<br/>
Time:3ms  Space:472K<br/>
Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)<br/>
<br/>
Solution 2 Recursive Solution<br/>
Time:3ms  Space:608K<br/>
Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)<br/>
<br/>
Solution 3 Reverse Vector Solution<br/>
Time:3ms  Space:484K<br/>
Time complexity:T(n) = O(n)   Space complexity:S(n) = O(n)<br/>
<br/>
### 2.问题:<br/>
### 给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。<br/>

2.Find the entry node of the loop<br/>

Task: ListNode* EntryNodeOfLoop(ListNode* pHead)<br/>
Parameters:<br/>
&emsp;&emsp;pHead: the head node of the list<br/>
Return value:<br/>
&emsp;&emsp;the head node of the list(loop found),null(no loop found)<br/>
<br/>
Solution 1 Two ptr Solution<br/>
Time:5ms  Space:476K<br/>
Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)<br/>

### 3.问题:<br/>
### 在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。<br/>
### 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5 <br/>


3.Delete duplication node in the list<br/>

Task: ListNode* deleteDuplication(ListNode* pHead)<br/>
Parameters:<br/>
&emsp;&emsp;pHead: the head node of the list<br/>
Return value:<br/>
&emsp;&emsp;the new list after deleting the duplication node<br/>
<br/>

Solution 1 Common Solution<br/>
Time:5ms  Space:480K<br/>
Time complexity:T(n) = O(n)   Space complexity:S(n) = O(1)<br/>
<br/>
