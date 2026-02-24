#include<iostream>
using namespace std;

class Employee
{
	public:
		
		int emp_id;
		string emp_name;
		int emp_age;
		string emp_role;
		double emp_salary;
		string emp_city;
		int emp_experience;
		string emp_company_name;
		
		
void getData(){
	
	cout<<"\nEnter employee ID:";
	cin>>emp_id;
	
	cout<<"Enter employee name:";
	cin>>emp_name;
	
	cout<<"Enter employee age:";
	cin>>emp_age;
	
	cout<<"Enter employee role:";
	cin>>emp_role;
	
	cout<<"Enter employee salary:";
	cin>>emp_salary;
	
	cout<<"Enter employee city:";
	cin>>emp_city;
	
	cout<<"Enter employee experience (years):";
	cin>>emp_experience;
	
	cout<<"Enter company name:";
	cin>>emp_company_name;
	
}
	
void displayData()
{
	cout<<"\nEmployee ID:"<< emp_id << endl;
	cout<<"Name:"<< emp_name << endl;
	cout<<"Age:"<< emp_age << endl;
	cout<<"Role:"<< emp_role << endl;
	cout<<"Salary:"<< emp_salary << endl;
	cout<<"City:"<< emp_city<< endl;
	cout<<"Experience:"<< emp_experience<<" years" << endl;	
	cout<<"Company name:"<< emp_company_name << endl;
}	
	
};

int main(){
	
	Employee emp[5]; //array of 5 employee 
	
	//input data
	
	for(int i=0; i<5; i++)
	{
		cout<<"\n Enter details for employee "<<i+1<<endl;
		emp[i].getData();
	}
	
//display data

cout<<"\n\n-----------------Employee records-------------------\n";
for(int i=0; i<5; i++){
	emp[i].displayData();
}
	
return 0;	
}

