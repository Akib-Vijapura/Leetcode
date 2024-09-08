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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        ListNode* curr = head;
        int length = 0;

        //Step 1 : Calculate the length of list
        while (curr) {
            length++;
            curr = curr->next;
        }

        // Step 2: Determine the size of each part
        int part = length / k;
        int remains = length % k;
        


        curr = head;

        for (int i = 0; i < k && curr; i++) {
            ans[i] = curr;
            int currentPartSize = part + (remains > 0 ? 1 : 0);
            remains--;

            // Step 3: Move to the end of the current part
            for (int j = 1; j < currentPartSize; j++) {
                curr = curr->next;
            }

            // Step 4: Break the link for the current part
            ListNode* nextPart = curr->next;
            curr->next = nullptr;
            curr = nextPart;
        }

        return ans;
    }
};