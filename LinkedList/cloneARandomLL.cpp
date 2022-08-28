class Solution {
private:
    void insertAtTail (Node *&head, Node *&tail, int data) {
        Node *temp = new Node (data);
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else {
            tail -> next = temp;
            tail = temp;
        }
    }
public:
    Node *copyList(Node *head)
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *originalNode = head;
        
        
        while (originalNode != NULL) {
            insertAtTail(cloneHead, cloneTail, originalNode -> data);
            originalNode = originalNode -> next;
        }
        
        unordered_map <Node*, Node*> oldToNew;
        originalNode = head;
        Node *cloneNode = cloneHead;
        while (originalNode != NULL) {
            oldToNew [originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        while (originalNode != NULL) {
            cloneNode -> arb = oldToNew [originalNode -> arb];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }
};
