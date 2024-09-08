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
    ListNode* oddEvenList(ListNode* head) {

        if(!head){
            return nullptr;
        }

        vector<ListNode*> odd;
        vector<ListNode*> even;
        ListNode* curr = head;
        int length = 0;
        while(curr){
            length++;
            curr = curr->next;
        }

        curr = head;
        for(int i = 0 ; i < length ; i++){
            if(i % 2 == 0){
                even.push_back(curr);
                curr = curr->next;
            }else{
                odd.push_back(curr);
                curr = curr->next;
            }
        }

        head = even[0];
        curr = head;

        for(int i = 1 ; i < even.size() ; i++){
            curr->next = even[i];
            curr = curr->next;
        }

        for(int i = 0 ; i < odd.size() ; i++){
            curr->next = odd[i];
            curr = curr->next;
        }

        curr->next = nullptr;

        return head;


    }
};