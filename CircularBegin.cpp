# include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	
	Node(int value)
	{
		data = value;
		next = NULL;
	}
};

class LinkedList{
	
public: Node* head;
	
LinkedList()
{
  head = NULL;
}	
	
void CircularInsertEnd(int value)
{
	Node* newNode = new Node(value);
	if (head==NULL)
	{
		head = newNode;
		newNode->next = head;
		return; 
	}
	
	Node* temp = head;
	while(temp->next != head)
	{
		temp = temp->next;
	}
	
	newNode->next = head;
	temp->next = newNode;
    head = newNode;
}	
	
	void Display() 
	{   
		if(head == NULL)
		{
			cout << "The List is Empty. " << endl;
			return;
		}
		
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL " << endl;
	}
	
	void Insert(int value)
	{
		Node* newNode = new Node(value);
		if (head == NULL)
		{
			
			head = newNode;
			newNode->next =  head;
			return;
		}
	    
	Node* temp = head;
	while(temp->next != head)
	{
		temp = temp->next;
	}
	
	newNode->next = head;
	temp->next = newNode;
	head = newNode;
	}
};

int main()
{
	LinkedList lt;
	
	lt.Insert(60);
	lt.Insert(50);
	lt.Insert(40);
	lt.Insert(30);
	lt.Insert(20);
	lt.CircularInsertEnd(10);

    lt.Display();

	return 0;
}














