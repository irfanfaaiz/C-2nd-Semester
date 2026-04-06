# include <iostream>
using namespace std;
# include <algorithm>

#define SIZE 5

class Stack
{
private: int top,arr[SIZE];
			
public:
Stack()
{
	top = -1;
}

void push(int x)
{
if(top >= SIZE)
{
	cout << "Stack is empty." << endl;
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
cout << " The end of the stack. " << endl;
return;	
}

bool isEqual(Stack s)
    {
if (top != s.top)
return false;

for (int i = 0; i <= top; i++)
{
if (arr[i] != s.arr[i])
return false;
}
return true;
}
    

};   // END OF CLASS

int main()
{
Stack sc1,sc2;	
int n1,n2;

cout << "Enter the size of the first stack: " << endl;
cin >> n1;

cout << "Enter the size of the second stack: " <<endl;
cin >> n2;

cout << "Enter the elements of the first stack. " << endl;
for (int i = 0; i < n1 ; i++)
{
int x;	
cin >> x;	
sc1.push(x);	
}	


cout << "Enter the elements of the second stack. " << endl;
for (int i = 0; i < n2 ; i++)
{
int y;	
cin >> y;	
sc2.push(y);	
}	

if (sc1.isEqual(sc2))
        cout << "Both stacks are equal." << endl;
    else
        cout << "Stacks are NOT equal." << endl;

	
return 0;
}
