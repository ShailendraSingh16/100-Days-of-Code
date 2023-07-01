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
    ListNode* findCycleStart(ListNode* head, ListNode* meetingPoint) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = meetingPoint;

        while (ptr1 != ptr2) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return ptr1;
    }
 
    ListNode *detectCycle(ListNode *head) {

        if (head == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return findCycleStart(head, slow);
            }
        }

        return NULL;
        
    }
};
