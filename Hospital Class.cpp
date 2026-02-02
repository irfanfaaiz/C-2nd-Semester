# include <iostream>
# include <string.h>
using namespace std;

class Hospital
{  
   public: 
   char ID,name[999];
   int room_state,num,total_bill;
       int vac;
          
   void Admit()
   {
    std::cout << "Enter your name: " << std::endl;    
    std::cin >> name; 
    
    std::cout << "Enter the patient ID: " << std::endl;    
    std::cin >> ID;

    std::cout << "Enter the number of the days you stayed til you were discharged: " << std::endl;
    std::cin >> num;   
   }
   
    void vacate()
    {
    
    if (num>1&& num <=5)
    total_bill = num*1000;
         
    else if(num>=6&&num<=14)
    total_bill = num*1500;
        
    std::cout << "Enter 1001 to check out/discharge." << std::endl;
    std::cin >> vac;
    
    std::cout << "Enter the number of the days you stayed til you were discharged: " << std::endl;
    std::cin >> num;   
    
    std::cout << "The cost for staying till 5 days is a thousand rupees a day, from beyond that till 14 will becomne 1500 rupees a day. " << std::endl;
    
    std::cout << "The total bill for "<< name<<"of the patient ID"<<ID<<" who remained in the Hospital till " << num << " of days is "<<total_bill<<"."<< std::endl;
    
    if(vac==1001)
    {
        std::cout << "You have successfully checked out the room." << std::endl;
    }
    
    else 
    std::cout << "." << std::endl;
}

};     //End of Class

int main()
{
    Hospital hl;
    hl.Admit();
    hl.vacate();
    
    return 0;
}
















































