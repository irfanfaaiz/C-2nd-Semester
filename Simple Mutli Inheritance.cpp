# include <iostream>
# include <string.h>
using namespace std;

class AcademicRecord
{
 public: int roll_num;
          float marks;	

 
 void Display1()
 {
 	cout<<"Enter your roll number: "<<endl;
 	cin>> roll_num;
 	
 	cout<<"Enter your marks: "<<endl;
 	cin>> marks;
 	
 } //End of Display 
	
}; //End Of Academics

class SportsRecord
{
 public: int score;
          char sport_name[100];	

 
 void Display2()
 {
 	cout<<"Enter your sport's name: "<<endl;
 	cin>> sport_name;
 	
 	cout<<"Enter your score in sports: "<<endl;
 	cin>> score;
 	
 } //End of Display2 
	
}; //End Of Sports

class Overall:public AcademicRecord, public SportsRecord                       
{
	public: float avg = (marks+score)/2;
	 
	void Display3()
	{
	cout<<"Your roll number is "<< roll_num<<endl;
	cout<<"Your academic mark is "<< marks<<endl;	
	cout<<"Your sport's name is "<< sport_name<<endl;
	cout<<"Your score is "<< score<<endl;
	cout<<"Your average is "<< avg<<endl;
    }
    
};



int main()
{
	AcademicRecord ar;
	SportsRecord sr;
	Overall ov;
	
	ov.Display1();
    ov.Display2();
	ov.Display3();
}









