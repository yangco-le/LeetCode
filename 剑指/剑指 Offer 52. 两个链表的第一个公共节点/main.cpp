/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;
        ListNode *pa = headA;
        ListNode *pb = headB;
        while (pa != pb) {
            pa = (pa == NULL) ? headB : pa->next;
            pb = (pb == NULL) ? headA : pb->next;
        }
        return pa;
    }
};