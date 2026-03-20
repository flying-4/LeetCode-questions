/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
	struct ListNode head;//虚拟头节点
	struct ListNode *p=&head;//p 指向虚拟头节点，用于构建结果链表
	while(list1!=NULL&&list2!=NULL)//比较后再连接
	{
		if(list1->val>list2->val)
		{
			p->next=list2;
			list2=list2->next;
		}
		else
		{
			p->next=list1;
			list1=list1->next;
		}
		p=p->next;
	}
	p->next=list1==NULL?list2:list1;//连接剩下未比较的节点
	return head.next;//返回第一个有效节点
}
