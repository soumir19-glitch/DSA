/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode* i = list1;
        ListNode* j = list2;
        
        ListNode* newHead;
        if (list1->val <= list2->val) {
            newHead = list1;
            i = i->next;
        } else {
            newHead = list2;
            j = j->next;
        }
        ListNode* tail = newHead;
        while (i && j) {
            if (i->val <= j->val) {
                tail->next = i;
                i = i->next;
            } else {
                tail->next = j;
                j = j->next;
            }
            tail = tail->next;
        }
        if (i)
            tail->next = i;
        if (j)
            tail->next = j;
        return newHead;
    }
}
;