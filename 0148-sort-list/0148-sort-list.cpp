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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> oldList;
        while(temp != NULL)
        {   
            oldList.push_back(temp->val);
            temp = temp -> next;
        }

        sort(oldList.begin() , oldList.end());
        temp = head;
        for(int i = 0 ; i < oldList.size() ; i++)
        {
            temp -> val = oldList[i];
            temp = temp -> next;
        }
        return head;
    }
};