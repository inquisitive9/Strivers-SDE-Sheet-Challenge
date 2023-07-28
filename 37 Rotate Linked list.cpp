/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
        // Write your code here.

     if(k==0 || head == NULL || head->next == NULL){

          return head;

     }

 

     Node *temp = head;

     int cnt=1;

     while(temp->next != NULL){

          temp = temp->next;

          cnt++;

     }

     k = k%cnt;

     if(k == 0){

          return head;

     }

     Node *temp2 = head;

     for(int i=1; i<cnt-k; i++){

          temp2 = temp2->next;

     }

     Node *newnode = temp2->next;

     temp->next = head;

     temp2->next = NULL;

 

     return newnode;

 
}
