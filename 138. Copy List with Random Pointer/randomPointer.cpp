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
private:
    void insertAtTail(Node* &cloneHead, Node* &cloneTail, int d){
        Node* node1=new Node(d);
        
        if(cloneHead == NULL){
            cloneTail=node1;
            cloneHead=node1;
            return;
        }
        cloneTail->next=node1;
        node1->next=NULL;
        cloneTail=node1;
    }
public:
    Node* copyRandomList(Node* head) {
                Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        
        Node* temp=head;
        
        while(temp != NULL){
            insertAtTail(cloneHead,cloneTail,temp->val);
            temp=temp->next;
        }
        
        // step 2: create a map
        unordered_map<Node*,Node*>oldToNewNode;
        Node* originalNode=head;
        Node* cloneNode=cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            oldToNewNode[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        originalNode=head;
        cloneNode=cloneHead;
        
        while(originalNode != NULL){
            cloneNode->random=oldToNewNode[originalNode->random];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        return cloneHead;
    }
};
