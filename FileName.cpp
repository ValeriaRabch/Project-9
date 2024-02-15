#include<iostream>
#include <string.h>
using namespace std;

struct WashingMachine  //1
{
	char firma[20], color[10];	
	int width, height, power, temperature;
};

struct Iron     //2
{
	char firma[20], model[20], color[10];
	int min_temperature, max_temperature, power;
	bool steam; 
};

struct Boiler   //3
{
	char firma[20], color[10];
	int power, amount, temperature;
};

void PrintWashingMachine(WashingMachine machine) {  //1	
	cout << "Firma -" << machine.firma << endl;
	cout << "Color -" << machine.color << endl;	
	cout << "Width -" << machine.width << endl;
	cout << "Height -" << machine.height << endl;	
	cout << "Power -" << machine.power << endl;
	cout << "Temperature -" << machine.temperature << endl;
}

void PrintIron(Iron iron) {  //2	
	cout << "Firma -" << iron.firma << endl;
	cout << "Color -" << iron.color << endl;	
	cout << "Model -" << iron.model << endl;
	cout << "Min Temperature -" << iron.min_temperature << endl;	
	cout << "Max Temperature -" << iron.max_temperature << endl;
	cout << "Steam -" << iron.steam << endl;
}

void PrintBoiler(Boiler boiler) {  //3	
	cout << "Firma -" << boiler.firma << endl;
	cout << "Color -" << boiler.color << endl;
	cout << "Power -" << boiler.power << endl;
	cout << "Temperature -" << boiler.temperature << endl;	
	cout << "Amount -" << boiler.amount << endl;
}

int main() 
{
	//завдання 1
	/*WashingMachine machine;
	cout << "Enter \n 1.Firma \n2.Color\n3.Widht\n4.Height\n5.Power\n6.Temperature" << endl;
	cin >> machine.firma >> machine.color;
	cin >> machine.width >> machine.height >> machine.power >> machine.temperature;
	PrintWashingMachine(machine);*/

	//завдання 2
	/*Iron iron;
	cout << "Enter \n 1.Firma \n2.Color\n3.Model\n4.Min_temperature\n5.Max_temperature\n6.Steam" << endl;
	cin >> iron.firma >> iron.color >> iron.model;
	cin >> iron.min_temperature >> iron.max_temperature >> iron.power >> iron.steam; 
	PrintIron(iron);*/

	//завдання 3
	Boiler boiler; 
	cout << "Enter \n 1.Firma \n2.Color\n3.Power\n4.Temperature\n5.Amount" << endl;
	cin >> boiler.firma >> boiler.color >> boiler.power;
	cin >> boiler.temperature >> boiler.amount;
	PrintBoiler(boiler);

	return 0;
}