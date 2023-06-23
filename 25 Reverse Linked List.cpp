LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
      LinkedListNode<int>* prev = NULL;
        LinkedListNode<int>* cur = head;
        LinkedListNode<int>* nxt;
        while(cur) {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
}
