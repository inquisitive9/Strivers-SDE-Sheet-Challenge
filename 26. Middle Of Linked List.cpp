Node *findMiddle(Node *head) {
    // Write your code here
      Node*fast = head;
        Node*slow = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
}
