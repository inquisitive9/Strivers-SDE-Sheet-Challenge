#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
      // Write your code here.

    if(head == NULL) return head;

    LinkedListNode<int>* temp1;

    LinkedListNode<int> *curr = head;

    // creating a clone within the original ll 

    while(curr){

        temp1 = curr -> next;

        curr -> next = new LinkedListNode<int>(curr->data);

        curr -> next -> next = temp1;

        curr = temp1;

    }

    curr = head;

    // for putting random links

    while(curr){

        curr -> next -> random = curr -> random ? (curr -> random -> next) : curr -> random;

        curr = curr -> next -> next;

    }

    // now we need to split both original and clone ll

    curr = head;

    LinkedListNode<int> *original = head;

    LinkedListNode<int> *copy = head -> next;

    temp1 = copy;

    while(original and copy){

        original -> next = original -> next -> next;

        copy -> next = copy -> next? copy -> next -> next : copy -> next;

        original = original -> next;

        copy = copy -> next; 

    }

    return temp1;
}
