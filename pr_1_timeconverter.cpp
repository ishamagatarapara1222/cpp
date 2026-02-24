#include<iostream>
using namespace std;

class TimeConverter
{
	public:
		//converts seconds to HH:MM:SS
		
		void secondsToHHMMSS(int totalSecond){
			
			int hours = totalSecond /3600;
			int minutes = (totalSecond % 3600) / 60;
			int seconds = totalSecond % 60;
			
			cout<<"HH:MM:SS =>"
				<<hours<<":"
				<<minutes<<":"
				<<seconds<<endl;
		}
		
		//convert HH:MM:SS to total second
		
		void hhmmssToSeconds(int hours, int minutes, int seconds){
			
			int totalSeconds = (hours * 3600) + (minutes * 60) +seconds;
			
			cout << "Total seconds: " << totalSeconds << endl;
		}
		
};

int main(){
	
TimeConverter obj;
	int choice;
	
	do{
		cout << "\n===== Time Converter =====\n";
        cout << "1. Convert Seconds to HH:MM:SS\n";
        cout << "2. Convert HH:MM:SS to Seconds\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice ==1){
        	int totalSeconds;
            cout << "Enter total seconds: ";
            cin >> totalSeconds;
            obj.secondsToHHMMSS(totalSeconds);
		}else if(choice ==2){
			 int h, m, s;
            cout << "Enter hours: ";
            cin >> h;
            cout << "Enter minutes: ";
            cin >> m;
            cout << "Enter seconds: ";
            cin >> s;
            obj.hhmmssToSeconds(h, m, s);
		}else if(choice == 3){
			 cout << "Exiting program...\n";
		}else{
			cout << "Invalid choice! Try again.\n";
		}
	}while (choice!=3);
	
	return 0;
}