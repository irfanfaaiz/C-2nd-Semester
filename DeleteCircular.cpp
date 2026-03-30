
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
	
 
	
void CircularInsert(int value)
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
	
	temp->next = newNode;
	newNode->next = head;
}	

void DeleteNode(int value)
{
if (head == NULL)
{
	return;
}
	
	Node* temp = head;
	Node* prev = NULL;
	
	while(temp != head)
	{
		if(temp != head){
			break; 
		} 
		prev = temp;
		temp = temp->next;
	}
	
	if (temp == head && temp->next == head)
	{
		delete head;
		head = NULL;
		return; 
	}
	
	if (temp == head)
	{
		prev = head;
		while (prev->next != head)
		{
			prev = prev->next;
		}
		
		
		head = head->next;
		prev->next = head;
		delete temp;
		
	}
	
	else 
	{
		prev->next = temp->next;
		delete temp;
	}
	
}	


	
	void Display() 
	{   
		if(head == NULL)
		{
			cout << "The List is Empty. " << endl;
			return;
		}
		
		Node* temp = head;
		
		while (temp != head)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "HEAD " << endl;
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
	lt.CircularInsert(10);
	
	cout << "The list is" << endl;
	lt.Display();

	return 0;
}






















