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
    ListNode *detectCycle(ListNode *head) {

        // Fast ans slow pointer
        ListNode* fast = head;
        ListNode* slow = head;

        //We will iterate until slow and fast meet together
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                break;
            }
        }

        //will return nullptr if there is no cycle 
        if(!(fast && fast->next)){
            return nullptr;
        }

        // the distance of head to cycle begins point and slow cycle begins poin are same
        while(head != slow){
            head = head->next;
            slow = slow->next;
        }

        return head;
    }
};