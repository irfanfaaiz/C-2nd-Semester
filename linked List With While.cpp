# include<iostream>
using namespace std;

// Node structure
struct Node 
{
    int data;       // Meant to accept the value or the variable
    Node* next;     // Meant to store the address of the 
};


class LinkedList   // Linked List class
{
private:
    Node* head; // Pointer to the head of the list

public:
    LinkedList() 
	{                               // constructors to initialize the values 
        head = NULL;             //
    }                               //
    
    void insertAtBeginning(int value)   // Actual code for the linked list
	{
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    
        void display()              // Code Meant to display the Linked List
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
    int n = 0;
   while (n!= 10)
   {
   	list.insertAtBeginning(n);
   	n++;
   }
    list.display();

    return 0;
}
