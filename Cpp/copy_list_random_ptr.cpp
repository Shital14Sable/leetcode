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
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        unordered_map<Node*, Node*> nodes;
        Node* start_node = head;

        while(start_node != NULL){
            nodes[start_node] = new Node(start_node -> val);
            start_node = start_node ->next;
        }
        
        Node* st_node = head;
        while(st_node != NULL){
            Node* new_node = nodes[st_node];
            if(st_node -> next != NULL) new_node -> next = nodes[st_node->next];
            else new_node -> next = NULL;

            if(st_node -> random != NULL) new_node -> random = nodes[st_node->random];
            else new_node -> random = NULL;
            st_node = st_node ->next;
        }
        return nodes[head];
    }
};