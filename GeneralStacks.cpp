#include <iostream>
using namespace std;
#include <algorithm>

#define SIZE 5

class Stack
{
private: int top,arr[SIZE]={1,2,3,4};
			
public:
Stack()
{
	top = 3;
}

void push(int x)
{
if(top >= SIZE - 1)
{
	cout << "Stack is full." << endl;
	return;
}	

arr[++top] = x;
cout << x << " is pushed in the array"<<endl;
}

void Display()
{
int i;	
	
cout << "The elements of the stack: " << endl;	
for(i=top;i>=0;i--)
{	
cout << arr[i] << "  " << endl;	
}	
cout << "The end of the stack. " << endl;
return;	
}

};   // END OF CLASS

int main()
{
Stack sc;	
	
sc.push(5);	
sc.Display();
	
return 0;
}