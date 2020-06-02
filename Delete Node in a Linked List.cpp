// we are given a linked list and we have to delete a particular node (except tail node)
// but we are not given the head of linked list instead of that we are given that node as an arguement.


class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* cur=node;
        ListNode* prev;
        while(cur->next)
        {
            prev=cur;
            cur->val=cur->next->val;
            cur=cur->next;
        }
        prev->next=NULL;
        delete(cur);
        
    }
};



// Time Complexity O(n)
// Space Complexity O(1)