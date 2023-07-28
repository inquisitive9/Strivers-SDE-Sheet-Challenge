/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
 Node*merge(Node*l1,Node*l2) {
        if(!l1) {
            return l2;
        }
        if(!l2) {
            return l1;
        }
        if(l1->data <= l2->data) {
            l1->child=merge(l1->child,l2);
            return l1;
        }
        else {
            l2->child=merge(l1,l2->child);
            return l2;
        }
    }
Node* flattenLinkedList(Node* root) 
{
	// Write your code here
	  if(!root || !root->next)
        return root;
    Node*newLL=flattenLinkedList(root->next);
	root->next = nullptr;
    root=merge(root,newLL);
    return root;
}
