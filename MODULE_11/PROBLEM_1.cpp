class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"my "<<slow->val;
        return slow;
    }
};





class Solution {
public:
    int size(ListNode* head)
    {
        ListNode*tmp=head;
        int cnt=0;
        while(tmp!=NULL)
        {
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int n=size(head);
        ListNode*tmp=head;
        for(int i=1;i<=n/2;i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};