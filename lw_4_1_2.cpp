#include<iostream>
using namespace std;

class P{
	protected:
		
		float temperature;
		
	public:
		
		void setTemperature(float c){
		 		temperature=c;
		}	
};

class Q : public P{
	public:
		float toFahrenheit(){
			return (temperature * 9.0/5.0) + 32.0;
		}
};

class R : public Q{
	public:
		
		float toKelvin(){
			 float fahrenheit = toFahrenheit();
			 
			 return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
		}
	
};
int main(){
	
	R tempConverter;
	float celsiusInput;
	
	cout<<"Enter temperature in celsius : ";
	cin>>celsiusInput;
	
	tempConverter.setTemperature(celsiusInput);
	
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Temperature in celsius: "<< celsiusInput << "degree celsius "<<endl;
	cout << "Temperature in Fahrenheit: " << tempConverter.toFahrenheit() << " degree Fahrenheit" << endl;
	cout << "Temperature in kelvin : " << tempConverter.toKelvin() <<" k" <<endl;
	
	return 0;
	
}