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
	
	void Reverse()
	{
		Node* prev = NULL;
		Node* current = head;
		Node* next = NULL;
		
		while(current!= NULL)
		{
			next = current->next;    // stores the next address
            current->next = prev;	 // next becomes the previous 		
			prev = current;          // previous becomes current 
			current = next;          // current becomes next
		}
		head = prev;                // finlly, the head becomes the last before null
	}  // End of reverse function
	
	
};


int main()
{
LinkedList list;
 	
list.insertLinkedList(10);
list.insertLinkedList(20);
list.insertLinkedList(30);
list.insertLinkedList(40);
list.insertLinkedList(50);

list.DisplayLinkedList();	

list.Reverse();
cout << "After Reversing: " << endl;
list.DisplayLinkedList();

return 0;
}
