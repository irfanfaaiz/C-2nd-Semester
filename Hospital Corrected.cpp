# include <iostream>
# include <string.h>
using namespace std;

class Hospital
{  
   public: 
   char ID[999],name[999];
   int days,total_bill;
   int vac;
          
   void Admit()
   {
    std::cout << "Enter your name: " << std::endl;    
    std::cin >> name; 
    
    std::cout << "Enter the patient ID: " << std::endl;    
    std::cin >> ID;
    
    std::cout << "Please enter the number of the days you stayed til you were discharged: " << std::endl;
    std::cin >> days; 
   }
   
   void billing()
   {
    if (days>=1 && days<=5)
    total_bill = days*1000;
         
    else if(days>=6 && days<=14)
    total_bill = days*1500;
    
    else 
    total_bill = days*2000;
   }
   
    void vacate()
    {
    std::cout << "The cost for staying till 5 days is a thousand rupees a day, from beyond that till 14 will becomne 1500 rupees a day and anything beyond that will become 2000 a day. " << std::endl;
    
    std::cout << "Enter 1001 to check out/discharge." << std::endl;
    std::cin >> vac;
    if(vac==1001)
    {
        std::cout << "You have successfully checked out the room." << std::endl;
        std::cout << "The total bill for "<< name<<"of the patient ID: "<<ID<<" who remained in the Hospital till " << days << " of days is "<<total_bill<<"."<< std::endl;
    }
    
    else 
    {
    std::cout << "." << std::endl;
    }

    }
    
    };     //End of Class

int main()
{
    Hospital hl;
    hl.Admit();
    hl.billing();
    hl.vacate();
    
    return 0;
}
















































