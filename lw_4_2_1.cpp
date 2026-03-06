#include<iostream>
using namespace std;

//base class 
class RBI{
	
	public:
		
		float rate;
};


//derived class SBI
class SBI : public RBI{
	
	public:
		
		void getROI(){
			
			rate = 6.5;
			cout << "Rate of interest in SBI: " << rate << "%" << endl;
		}
};


//derived class BOB
class BOB : public RBI{
	
	public: 
	
	void getROI(){
		
		rate = 6.8;
		cout << "Rate of interest in BOB: " << rate << "%" << endl;
	}
};


//derived class ICICI
class ICICI : public RBI{
	
	public:
		 
		 void getROI(){
		 	
		 	rate = 7.0;
		 	cout << "Rate of interest in ICICI: " << rate << "%" << endl;
		 }
};

int main(){
	
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.getROI();
	b1.getROI();
	i1.getROI();
	
	return 0;
}