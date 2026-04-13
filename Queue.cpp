# include <iostream>
# include <string>

using namespace std;

# define SIZE 100

class Queues
{
private:  int arr[SIZE], front, rear;
	
public: 
Queues()
{	
front = 0;
rear = -1;
}	
	
bool isFull()
{
return rear == SIZE-1;  	
}	
	
bool isEmpty()
{
return front > rear;	
}	

void enqueue(int value)
{
if(isFull())
{
cout << " Elements Overflow " <<endl;	
return;	
}	
	
rear = rear + 1;	
arr[rear] = value;	
cout << "this value is enqueued " << value << endl;	
}

void dequeue(int value)
{
if(isEmpty())
{	
cout << "Elements Underflow " << endl;
return;	
}	
	
cout << "Element dequeued " << value << endl;	
front = front - 1;		
}

int peek()
{
	
if(isEmpty())
{
	
cout << "No Elements to be displayed " << endl;	
return -1;	

}

return arr[front];		
}

void Display()
{
if(isEmpty())
{
cout << "Que is EMPTY!!" <<endl;	
return;	
}	

for(int i = 0; i < rear; i++)
{
cout << arr[i] << "  ";		
}
return;	
}

};

int main()
{
Queues qu;

qu.enqueue(10);	
qu.enqueue(20);	
qu.enqueue(30);	
qu.enqueue(40);
qu.enqueue(50);
qu.enqueue(60);

cout << "The original queue " << endl;
qu.Display();


qu.dequeue(20);

cout << "The new queue " << endl;
qu.Display();
	
return 0;	
}












































































































