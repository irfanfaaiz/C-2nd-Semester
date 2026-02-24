#include<iostream>
using namespace std;

// Node structure
struct Node 
{
    int data;       // Meant to accept the value
    Node* next;     // Meant to store the address of the next node
};

class LinkedList   // Linked List class
{
private:
    Node* head; // Pointer to the head of the list

public:
    LinkedList() 
    {                               
        head = NULL;             
    }                               
    
    void insertAtEnd(int value)   // Code for inserting at ending
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        // If list is empty
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node* temp = head;

        // Traverse till last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // Attach new node at the end
        temp->next = newNode;
    }
    
    void display()
    {
        if (head == NULL) 
        {
            cout << "The List is empty.\n";
            return;
        }

        Node* temp = head;           
        while (temp != NULL) 
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() 
{
    LinkedList list;

    // Predefined values (no loop)
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.display();

    return 0;
}
