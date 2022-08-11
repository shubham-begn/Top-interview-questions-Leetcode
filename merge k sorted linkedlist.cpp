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
    struct compare {
    bool operator()(const ListNode* l, const ListNode* r) {
        return l->val > r->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        
        int n=lists.size();
        
        for(int i=0;i<n;i++)
        {
            if(lists[i]!=NULL) 
            pq.push(lists[i]);
        }
        if(pq.empty()) return NULL;
        ListNode* head=pq.top();
        ListNode*tail=head;
        pq.pop();
        if(tail->next!=NULL) pq.push(tail->next);
        
        while(!pq.empty())
        {
            ListNode * curr=pq.top();
            pq.pop();
            tail->next=curr;
            tail=tail->next;
            
            if(curr->next!=NULL) pq.push(curr->next);
        }
        
        return head;
    }
};
