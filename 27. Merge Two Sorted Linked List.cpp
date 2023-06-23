Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2)
{
    // Write your code here.
    if(!list1) return list2;
        if(!list2) return list1;
        if(list1->data <= list2->data) {
            list1-> next = sortTwoLists(list1->next,list2);
            return list1;
        }
            list2-> next = sortTwoLists(list1,list2->next);
            return list2;
}
