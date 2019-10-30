//So, basically as we all know doubly linked list have two address, 1 for next another for previous. It requires a lot of space to store the two address.
//There is a Linked List called XOR Linked list which stores only one address that is XOR of the previous and next address.

#include <iostream>
#include <cstdint> //library for importing "uintptr_r" data structure.

using namespace std;

class Node {
  public:
    int data;
    Node *link;

    Node(int d) {
      data = d;
      link = NULL;
    }
};

//This function calculates XOR of two pointers and return it.
Node* XOR(Node *a, Node *b) {
  return (Node*)((uintptr_t)(a) ^ (uintptr_t)(b));
}


void push(Node **head, int data) {
  Node *temp = new Node(data);
  temp->link = XOR(*head, NULL);

  if ((*head) != NULL) {
    (*head)->link = XOR(temp, XOR((*head)->link, NULL));
  }
  
  (*head) = temp;

}

void print(Node *head) {
  Node *curr = head;
  Node *prev = NULL;
  Node *next;

  while(curr != NULL) {
    cout << curr->data << " ";

    next = XOR(prev, curr->link);

    prev = curr;

    curr = next;
  }
}

int main() {
  Node *head;
  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 5);
  push(&head, 6);
  print(head);
  
}
