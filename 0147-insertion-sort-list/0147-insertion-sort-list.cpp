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
    ListNode* insertionSortList(ListNode* head) {
        if(!head){
            return nullptr;
        }

        vector<int> arr;

        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 1; i < arr.size() ; i++){
            int curr = arr[i];
            int j = i-1;

            while(j >= 0 && arr[j] > curr){
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = curr;

        }

         

        temp = head;

        for(auto val : arr){
            temp->val = val;
            temp = temp->next;
        }

        return head;
    }
};