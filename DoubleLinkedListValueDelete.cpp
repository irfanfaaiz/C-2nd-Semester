#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() { head = NULL; }

    void insertAtEnd(int value) {
        Node* newNode  = new Node();
        newNode->data  = value;
        newNode->next  = NULL;
        newNode->prev  = NULL;

        if (head == NULL) { head = newNode; return; }

        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next    = newNode;
        newNode->prev = temp;
    }

    void deleteByValue(int value) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;

        // Search for the node
        while (temp != NULL && temp->data != value) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Value not found.\n";
            return;
        }

        // Fix the backward link
        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        // Fix the forward link
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;   // deleting the head node

        delete temp;
        cout << "Deleted node with value " << value << ".\n";
    }

    void display() {
        Node* temp = head;
        cout << "nullptr <-> ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    ~DoublyLinkedList() {
        Node* temp = head;
        while (temp != NULL) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    DoublyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.display();          // 10 <-> 20 <-> 30 <-> 40

    list.deleteByValue(20);
    list.display();          // 10 <-> 30 <-> 40

    list.deleteByValue(10);  // deleting head
    list.display();          // 30 <-> 40

    list.deleteByValue(99);  // not found
    return 0;
}
