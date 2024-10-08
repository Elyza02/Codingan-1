#include <iostream>
using namespace std;

float celciusTofahrenheit(float celcius) {
	return (celcius * 9/5) + 32;
	
}

float fahrenheitTocelcius(float fahrenheid){
	
}
int main(){
	int choice;
	float temperature;
	cout <<"pilih konversi: 1. Celcius ke Fahrenheit 2. Fahrenheit ke Celsius\n";
    cin  >> choice;
    cout <<"masukan suhu: ";
    cin >> temperature;
    
    if (choice == 1)
       cout << temperature << "celcius =" << celciusTofahrenheit(temperature) <<"Fahrenhei";
    else
	
	   return 0;   
}
