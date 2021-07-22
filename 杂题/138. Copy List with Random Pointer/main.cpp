/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> rec;

    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        if (!rec.count(head)) {
            Node *_head = new Node(head->val);
            rec[head] = _head;
            _head->next = copyRandomList(head->next);
            _head->random = copyRandomList(head->random);
        }
        return rec[head];
    }
};