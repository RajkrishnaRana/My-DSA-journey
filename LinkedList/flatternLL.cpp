#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node *merge (Node *down, Node *right) {
    Node *ans = new Node (-1), *temp = ans;
    
    while (down != NULL && right != NULL) {
        if (down -> data < right -> data ) {
            temp -> child = down;
            temp = down;
            down = down -> child;
        }
        else {
            temp -> child = right;
            temp = right; 
            right = right -> child;
        }
    }
    if (down) temp -> child = down;
    if (right) temp -> child = right;
    ans = ans -> child;
    return ans;
}

Node* flattenLinkedList(Node* head) 
{
	if (head == NULL || head -> next == NULL) return head;
    
    Node *down = head;
    Node *right = flattenLinkedList (head -> next);
    down -> next = NULL;
    
    Node *ans = merge (down, right);
    return ans;
}
