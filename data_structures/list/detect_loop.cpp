#include <iostream>
#include <climits>

/*
 *  Program that find if there is a loop in a given list!
 */

struct Node {
	int     data;
	Node*   next;
};

Node*   newNode(int d);
bool    detectLoop(Node* head);

int main()
{
	Node* head = newNode(23);
	head->next = newNode(65);
	head->next->next = newNode(7);
	head->next->next->next = newNode(9);
	head->next->next->next->next = newNode(2);
//	head->next->next->next->next->next = head->next->next;

	if (detectLoop(head)) {
        std::cout << "\t!!!!ALERT!!!!!\n\tLoop Found!\n";
    } else {
        std::cout << "You are wining son!\n";
    }

	return 0;
}

Node*   newNode(int d)
{
	Node* t = new Node();
	t->data = d;
	t->next = NULL;
	return t;
}

bool    detectLoop(Node* head)
{
	if (!head) {
		return false;
    } else {
		while (head) {
			if (head->data == INT_MIN) {
				return true;
			} else {
				head->data = INT_MIN;
				head = head->next;
			}
		}
		return false;
	}
}

