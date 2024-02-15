#include<iostream>
#include <string.h>
using namespace std;

struct WashingMachine  //1
{
	char firma[20], color[10];	
	int width, height, power, temperature;
};

void PrintWashingMachine(WashingMachine machine) {  //1	
	cout << "Firma -" << machine.firma << endl;
	cout << "Color -" << machine.color << endl;	
	cout << "Width -" << machine.width << endl;
	cout << "Height -" << machine.height << endl;	
	cout << "Power -" << machine.power << endl;
	cout << "Temperature -" << machine.temperature << endl;
}

int main() 
{
	//завдання 1
	WashingMachine machine;
	cout << "Enter \n 1.Firma \n2.Color\n3.Widht\n4.Height\n5.Power\n6.Temperature" << endl;
	cin >> machine.firma >> machine.color;
	cin >> machine.width >> machine.height >> machine.power >> machine.temperature;
	PrintWashingMachine(machine);
	return 0;
}