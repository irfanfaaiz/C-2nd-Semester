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

    int cumulativeSum() {
        int sum    = 0;
        Node* temp = head;

        while (temp != NULL) {   // visit every node and add
            sum  += temp->data;
            temp  = temp->next;
        }
        return sum;
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

    list.display();
    cout << "Cumulative Sum: " << list.cumulativeSum() << endl;  // 100
    return 0;
}
