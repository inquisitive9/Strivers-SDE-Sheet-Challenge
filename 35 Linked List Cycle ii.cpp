/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
       if(head==NULL and head->next==NULL){

        return NULL;

    }

    Node *slow=head;

    Node *fast=head;

    Node *entry=head;

    while(fast->next and fast->next->next){

        slow=slow->next;

        fast=fast->next->next;

        if(slow==fast){

            while(slow!=entry){

                slow=slow->next;

                entry=entry->next;

            }

            return entry;

        }

    }

    return NULL;
}
