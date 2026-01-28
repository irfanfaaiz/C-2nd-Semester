# include <iostream>
# include <string.h>
using namespace std;

class Employee
{
	public:
    int emplif,basic_sal;
    char name[100];
    
    void emRead()
    {
    	cout<<"Enter your name: "<<endl;
    	cin>>name;
    	
    	cout<<"Enter your employee id: "<<endl;
    	cin>>emplif;
    	
    	cout<<"Enter your salary: "<<endl;
    	cin>>basic_sal;	
    }
    
	void emDisplay()
	{
    	cout<<"Your name: "<<name<<endl;
    	cout<<"Your ID: "<<emplif<<endl;
    	cout<<"Your salary: "<<basic_sal<<endl;
    	
	} 
	
}; // End Of The First Class


class Manager: public Employee
{
	public:
    int allowance,total_pay;
    
    void mgRead()
    {  
        cout<<"Enter your name: "<<endl;
    	cin>>name;
    	
    	cout<<"Enter your employee id: "<<endl;
    	cin>>emplif;
    	
    	cout<<"Enter your salary: "<<endl;
    	cin>>basic_sal;	
         
    	cout<<"Enter your allowance: "<<endl;
    	cin>>allowance;	
    }
    
    void mgTotal()
    {
    	total_pay = basic_sal+allowance;
	}
    
	void mgDisplay()
	{
    	cout<<"Your name: "<<name<<endl;
    	cout<<"Your ID: "<<emplif<<endl;
    	cout<<"Your salary: "<<basic_sal<<endl;
    	cout<<"Your total  salary: "<<total_pay<<endl;
	} 
	
}; // End Of The Second Class

int main()
{
	Manager mn;
	
	mn.mgRead();
	mn.mgTotal();
	mn.mgDisplay();
	
	return 0;
}










