void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
     auto nxt = node->next;
        *node = *(node->next);;
        delete nxt;
}
