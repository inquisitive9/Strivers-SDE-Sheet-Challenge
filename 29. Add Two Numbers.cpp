Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
      Node* head = new Node(-1);
        Node* ptr = head;
        int carry = 0;
        while(l1 || l2 || carry) {
            int sum = carry;
            if(l1) {
                sum += l1->data;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->data;
                l2 = l2->next;
            }
            ptr->next = new Node(sum%10);
            ptr = ptr->next;
            carry = sum/10;
        }
        return head->next;
}
