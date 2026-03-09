# include <iostream>
# include <string>
using namespace std;

struct Node
{
int data;	
Node* next;
};

class LinkedList
{
	private: Node* head;
	
	public: 
      LinkedList()     // using a construtor to initialize the values
	{                    
		head = NULL;
	}
	
	void insertLinkedList(int value)
	{
		Node* NewNode = new Node();
		NewNode->data = value;
		NewNode->next = head;
		head = NewNode;
	}
	
	void DisplayLinkedList()
	{
		if(head==NULL)
		{
			cout << "The List is empty. " <<endl;
			return;
		}
        
	  Node* temp = head; 
	  while(temp!= NULL)
	  {  
	  	cout << temp->data <<"->"<<endl;
	  	temp = temp->next; 
	  }
		
		cout << "NULL" << endl;
	}
	
};


int main()
{
LinkedList list;
 	
list.insertLinkedList(10);
list.DisplayLinkedList();	

return 0;
}
