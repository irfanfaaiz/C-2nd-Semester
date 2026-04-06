# include <iostream>
using namespace std;
# include <algorithm>


class Stack
{
private: int top,arr[],size;
			
public:
Stack()
{
	top = -1;
}
void acceptsize()
{	
cout << "Enter Size " << endl;	
cin >> size;
}

void push(int x)
{
if(top >= size)
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

sc.acceptsize();

if(sc.acceptsize() == )	
sc.push(1);	
sc.push(2);	
sc.push(3);	
sc.push(4);	
sc.push(5);	
sc.Display();
	
return 0;
}
