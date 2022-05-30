#include <iostream>

/*
 *  Program that will find the middle node value in a singly linked list.
 */

struct Node {
    int data;
	Node *next;
};

class List {
public:
    void addElem(Node** n, int d)
    {
        Node* node = new Node();
        node->data = d;
        node->next = *n;
        *n = node;
    }
	
    void displayList(Node* head){
	    while(head != NULL) {
            std::cout <<head->data << ", ";
		    head = head->next;
	    }
        std::cout << "NULL\n";
    }
	
    Node*   findMiddle(Node* head){
	    Node *slow_ptr = head;
	    Node *fast_ptr = head;
	    
        if (head != NULL) {
		    while (fast_ptr != NULL && fast_ptr->next != NULL) {
			    fast_ptr = fast_ptr->next->next;
			    slow_ptr = slow_ptr->next;
		    }
		    return slow_ptr;
	    }
        return NULL;
    }
};

int main(){
	Node* head = NULL;
    List* lst = new List();

	for (int i = 0; i < 6; ++i) {
		lst->addElem(&head, i);
    }
	lst->displayList(head);
    std::cout << "The middle elem of the list is " << lst->findMiddle(head)->data << std::endl;

	return 0;
}

