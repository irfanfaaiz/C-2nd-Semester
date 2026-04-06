# include <iostream>
using namespace std;
# include <vector>
# include <stack>

class StackVector
{
private: vector<int> vec = {1,2,3,4,5,6};	

public: 

void DisplayVec()
{
for(int value : vec)
{
cout << value << " ";	
}	
cout << "The End. " << endl;	
return; 
}	

void ReverseVector(vector <int> &vect)	
{
stack <int> st;	

for(int i = vect.size(); i > 0 ; i++)
{
st.push(vect[i]);	
}	

for(int i = 0 ; i < vect.size() ; i++)
{
vect[i] = st.top();	
st.pop();
}

}	

	
}; // END OF CLASS 

int main()
{
StackVector sv;	
vector<int> vec = {1,2,3,4,5,6};

sv.DisplayVec();
sv.ReverseVector(vec);

cout << "The new Vector is: " <<endl;	
sv.DisplayVec();

return 0;	
}
