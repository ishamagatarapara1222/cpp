#include<iostream>
using namespace std;

//base class
class Base1{
	
	protected:
		int num1;
	
	public:
		//constructor for base-1
		Base1(int n1){
			num1 = n1;
		}	
};

//Intermediate Derived class (single inheritance from base1)
class Derived1 : public Base1{
	
	protected:
		int num2;
	public:
		//inheriting constructor from base1
		Derived1(int n1,int n2) : Base1(n1){
			num2=n2;
		}
};

//Base class - 2
class Base2{
	
	protected:
		int num3;
	public:
		//constructor for base 2
		Base2(int n3){
			num3 = n3;
		}
};

//Hybrid Inheritance
class FinalSum : public Derived1 , public Base2{
	
	protected :
		int num4;
	public:
		// Inheriting constructors from Derived1 and Base2
		FinalSum(int n1, int n2, int n3, int n4) : Derived1(n1,n2), Base2(n3){
			num4 = n4;
		}	
		
	//method to claculate and display the sum
	void displaySum(){
		int sum = num1 + num2 + num3 + num4;
		cout << "The four numbers are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;
		cout << "Sum of the four number is : " << sum << endl;
	}
};

int main(){
	cout << "------Hybrid Inheritance Constructor Sum------"<<endl;
	
	FinalSum obj(15,25,35,45);
	
	obj.displaySum();
	
	return 0;
}