#include<bits/stdc++.h>
class LRUCache {
public:
    class Node {
        public:
        int key;
        int val;
        Node*next;
        Node*prev;
        Node(int key,int val) {
            this->key = key;
            this->val = val;
        }
    };
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int cap ;
    map<int,Node*> mp;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    void deleteNode() {

    }
    void addNode() {
        
    }
    int get(int key) {
            if(!mp.count(key)) return -1;
            Node*temp = mp[key];
            int ans = temp->val;
            Node*cur = temp;
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            cur->prev = head;
            cur->next = head->next;
            head->next->prev = cur;
            head->next = cur;
            mp[key] = cur;
            return ans;
    }
    
    void put(int key, int value) {
        if(mp.count(key)) {
            Node* temp = mp[key];
            Node*cur = temp;
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            cur->prev = head;
            cur->next = head->next;
            head->next->prev = cur;
            head->next = cur;
            cur->val = value;
            mp[key] = cur;
            return;
        }
        if(cap == 0) {
            Node*temp = tail->prev;
            temp->prev->next = tail;
            tail->prev = temp->prev;
            temp->next = NULL;
            temp->prev = NULL;
            mp.erase(temp->key);
            delete temp;
            cap++;
        }

        Node* newnode = new Node(key,value);
        newnode->prev = head;
        newnode->next = head->next;
        head->next->prev = newnode;
        head->next = newnode;
        mp[key] = newnode;
        cap--;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
