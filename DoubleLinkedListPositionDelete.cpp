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

    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        int count  = 1;

        // Traverse to the desired position
        while (temp != NULL && count < position) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            cout << "Position out of range.\n";
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

        cout << "Deleted node at position " << position
             << " (value: " << temp->data << ").\n";
        delete temp;
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

    list.display();              // 10 <-> 20 <-> 30 <-> 40

    list.deleteAtPosition(2);    // delete 20
    list.display();              // 10 <-> 30 <-> 40

    list.deleteAtPosition(1);    // delete head (10)
    list.display();              // 30 <-> 40

    list.deleteAtPosition(10);   // out of range
    return 0;
}
