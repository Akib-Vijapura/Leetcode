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
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }

        return gcd(b, a % b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode*curr = head;
        ListNode* prev = nullptr;

        while(curr->next != nullptr){
            prev = curr;
            curr = curr->next;

            int a = prev->val;
            int b = curr->val;

            int gcdVal = gcd(a , b);
            ListNode* newNode = new ListNode(gcdVal);

            newNode->next = curr;
            prev->next = newNode;
        }

        return head;
    }
};