//Geeks for Geeks problem
struct Node* reverse (struct Node *head) {
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    
    while (curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

void insertAtTail (struct Node *&head, struct Node *&tail, int digit) {
    Node *temp = new Node (digit);
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

struct Node *add (struct Node *first, struct Node *second) {
    int carry = 0;
    
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    
    while (first != NULL || second != NULL || carry != 0) {
        int val1 = 0;
        if (first != NULL) val1 = first -> data;
        
        int val2 = 0;
        if (second != NULL) val2 = second -> data;
        
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        
        insertAtTail (ansHead, ansTail, digit);
        
        carry = sum / 10;
        
        if (first != NULL) first = first -> next;
        if (second != NULL) second = second -> next;
    }
    
    return ansHead;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse (first);
        second = reverse (second);
        
        struct Node *ans = add (first, second);
        
        ans = reverse (ans);
         
        return ans;
        
    }
};

struct Node* reverse (struct Node *head) {
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    
    while (curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

void insertAtTail (struct Node *&head, struct Node *&tail, int digit) {
    Node *temp = new Node (digit);
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

struct Node *add (struct Node *first, struct Node *second) {
    int carry = 0;
    
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    
    while (first != NULL || second != NULL || carry != 0) {
        int val1 = 0;
        if (first != NULL) val1 = first -> data;
        
        int val2 = 0;
        if (second != NULL) val2 = second -> data;
        
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        
        insertAtTail (ansHead, ansTail, digit);
        
        carry = sum / 10;
        
        if (first != NULL) first = first -> next;
        if (second != NULL) second = second -> next;
    }
    
    return ansHead;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse (first);
        second = reverse (second);
        
        struct Node *ans = add (first, second);
        
        ans = reverse (ans);
         
        return ans;
        
    }
};

//without using map space complexity = O(1)
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
        
        Node *cloneNode = cloneHead;
        originalNode = head;
        Node *next = NULL;
        while (originalNode != NULL) {
            next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = next;  
        }
        
        originalNode = head;
        while (originalNode != NULL) {
            if (originalNode -> next != NULL) {
                originalNode -> next -> arb = originalNode -> arb ? 
                originalNode -> arb -> next : originalNode -> arb;
                
                // if (originalNode -> arb != NULL) 
                //     originalNode -> next -> arb = originalNode -> arb -> next;
                // else
                //     originalNode -> next = originalNode -> arb;
            }
            originalNode = originalNode -> next -> next;
        }
        
        cloneNode = cloneHead;
        originalNode = head;
        //next = NULL;
        while (originalNode != NULL) {
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if (originalNode != NULL)
            cloneNode -> next = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }

