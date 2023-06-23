Node* findIntersection(Node *headA, Node *headB)
{
    //Write your code here
           Node*ptr1 = headA ,*ptr2 = headB;
        if(!headA) return NULL;
        if(!headB) return NULL;
        while(ptr1 || ptr2) {
            if(!ptr1) ptr1 = headB;
            if(!ptr2) ptr2 = headA;
            if(ptr1 == ptr2) return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
}
