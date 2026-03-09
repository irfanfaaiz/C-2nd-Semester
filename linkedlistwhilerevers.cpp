# include <iostream>
# include <string>
using namespace std;

// Program to Reverse a linked list while accepting elements from the user at will

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
	
	void insertLinkedList(int size)
	{
		int i = 0, value; 
		
		for(i=0 ; i < size ; i++)
		{
		cout << "Enter the value at: " << i+1 << endl;	
		cin >> value;
		Node* NewNode = new Node();
		NewNode->data = value;
		NewNode->next = head;
		head = NewNode;
		
	    }
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
	  	cout << temp->data <<"-> ";
	  	temp = temp->next; 
	  }
		
		cout << "NULL" << endl;
	}
	
	void Reverse(int length)
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
int n;
 	
cout << "Enter a linked list index: " << endl; 	
cin >> n;
list.insertLinkedList(n);

list.DisplayLinkedList();	

cout<< "Reversing only half the array: " << endl;

list.Reverse(n/2);
cout << "After Reversing: " << endl;
list.DisplayLinkedList();

return 0;
}
