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
	
	return 0;
}