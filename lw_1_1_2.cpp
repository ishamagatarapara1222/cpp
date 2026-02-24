#include<iostream>

using namespace std;

int main(){
	
	int startYear, endYear;
	
	cout<<"Enter the first number:-";
	cin >> startYear;
	
	cout<<"Enter the second number:-";
	cin>>endYear;
	
	//maximum possible size
	int leapYears[100];
	int index=0;
	
	for(int year= startYear; year<=endYear; year++){
		
		//leap year condition
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0))
		{
			leapYears[index]=year;
			index++;
		}
}
	cout<<"The array is:";
	for(int i=0; i < index; i++){
		
		cout<<leapYears[i];
		if(i<index-1){
			cout<<", ";
		}
	}
	return 0;
}