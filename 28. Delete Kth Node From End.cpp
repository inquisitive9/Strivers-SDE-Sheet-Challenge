Node* removeKthNode(Node* head, int n)
{
    // Write your code here.
       Node*fast = head,*slow = head;
        for(int i = 0 ; i < n ;i++) fast = fast->next;
        if(!fast) return head->next;
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
}
