# include <iostream>
# include <string.h>
using namespace std;

class Hostel
{  
   public: 
   char room_num,name[999];
   int room_state,num;
       int vac;
          
   void Allocate()
   {
    std::cout << "Enter your name: " << std::endl;    
    std::cin >> name; 
    
    std::cout << "Enter a block that you desire: " << std::endl;    
    std::cin >> room_num;   
    
    if(int(room_num)==65)
    {
    std::cout << "Your block is A" << std::endl;
    }
    
   else if(int(room_num)==66)
    {
    std::cout << "Your block is B" << std::endl;
    }
    
  else if(int(room_num)==67)
    {
    std::cout << "Your block is C" << std::endl;
    }
    
   else if(int(room_num)==68)
    {
    std::cout << "Your block is D" << std::endl;
    }    
    
    std::cout << "Enter the number from 1 till 10" << std::endl;
    std::cin >> num;   
    if(num%2 == 0)
    {
        room_state=1;
    }
    else 
        room_state=0;
   }    

  void Status()
  {
  if (room_state==1)
  std::cout << "The room is yours to take. " << std::endl;
  else 
  std::cout << "The room is occupied" << std::endl;
}

   
    void vacate()
    {
    std::cout << "Enter 1001 to Vacate the room." << std::endl;
    std::cin >> vac;
    
    if(vac==1001)
    {
        std::cout << "You have successfully vacated the room." << std::endl;
    }
    
    else 
    std::cout << "." << std::endl;
}

}; //End of Class

int main()
{
    Hostel hl;
    hl.Allocate();
    hl.Status();
    hl.vacate();
    
    return 0;
}











































