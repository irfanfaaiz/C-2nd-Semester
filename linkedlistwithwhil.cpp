# include <iostream>
# include <string>
using namespace std;

// Program to use a while to accept

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
		Node* NewNode = new Node();   // Creating a variable to 
		NewNode->data = value;        // The the value becomes data in the structure 
		NewNode->next = head;         // The address of the next will become 
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

int i,n,k=0,val;

cout << "Enter a number to be displayed: " << endl;
cin >> n;

for (i = 0 ; i < n ; i++)
{
	cout << "Enter the value: " << i+1 << endl;
	cin >> val;
	list.insertLinkedList(val);
	k++;
}

list.insertLinkedList(10);
list.DisplayLinkedList();	
cout << "The number of values is " << k << endl; 

return 0;
}
