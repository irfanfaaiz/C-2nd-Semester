# include <iostream>
# include <string.h>
using namespace std;

class BankAccount
{
	private: int balance;
	
	public: BankAccount(int b)
 	{
         balance = b;
		cout<<"The balance is "<<balance<<endl; 
	}
      
    friend class AccMng;
      
};   //End Of Class

class AccMng{ 
private: int modify;
 
   public:  void admin(BankAccount bt)
     {
    cout<<"Modify balance "<<endl; 
    cin>> modify;
    bt.balance = modify+bt.balance;
    cout<<"The updated balance is "<<bt.balance<<endl; 
	 }

};


int main()
{
	BankAccount ba(100000);
	AccMng am;
	am.admin(ba);
	
	return 0;
}





