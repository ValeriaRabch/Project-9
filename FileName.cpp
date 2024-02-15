#include<iostream>
#include <string.h>
using namespace std;

//struct WashingMachine  //1
//{
//	char firma[20], color[10];
//	int width, height, power, temperature;
//};
//
//struct Iron     //2
//{
//	char firma[20], model[20], color[10];
//	int min_temperature, max_temperature, power;
//	bool steam;
//};
//
//struct Boiler   //3
//{
//	char firma[20], color[10];
//	int power, amount, temperature;
//};

struct Animal   //4
{
	char animal[20], clas[20], name[20];
};

//void PrintWashingMachine(WashingMachine machine) {  //1
//	cout << "Firma -" << machine.firma << endl;
//	cout << "Color -" << machine.color << endl;
//	cout << "Width -" << machine.width << endl;
//	cout << "Height -" << machine.height << endl;
//	cout << "Power -" << machine.power << endl;
//	cout << "Temperature -" << machine.temperature << endl;
//}
//
//void PrintIron(Iron iron) {  //2
//	cout << "Firma -" << iron.firma << endl;
//	cout << "Color -" << iron.color << endl;
//	cout << "Model -" << iron.model << endl;
//	cout << "Min Temperature -" << iron.min_temperature << endl;
//	cout << "Max Temperature -" << iron.max_temperature << endl;
//	cout << "Steam -" << iron.steam << endl;
//}
//
//void PrintBoiler(Boiler boiler) {  //3
//	cout << "Firma -" << boiler.firma << endl;
//	cout << "Color -" << boiler.color << endl;
//	cout << "Power -" << boiler.power << endl;
//	cout << "Temperature -" << boiler.temperature << endl;
//	cout << "Amount -" << boiler.amount << endl;
//}

void Fulling(Animal &creature, int &n) {    //4

	cout << "Select\n1.Cat\n2.Pig\n3.Dog\n4.Cow" << endl;
	cin >> creature.animal;
	if (strcmp(creature.animal, "Cat") != 0 && strcmp(creature.animal, "Pig") != 0 && strcmp(creature.animal, "Dog") != 0 && strcmp(creature.animal, "Cow") != 0) {
		n ++;
		cout << "Error";
		return;
	}
	cout << "Enter class -"; cin >> creature.clas;
	cout << "Enter name -"; cin >> creature.name;
	
}

void Print(Animal creature, int n) {  //4
	if (n != 0) {
		cout << "Error";
		return;
	}
	cout << "Animal -" << creature.animal << endl;
	cout << "Class -" << creature.clas << endl;
	cout << "Name -" << creature.name << endl;
}

void Voice(Animal creature) {  //4
	if (strcmp(creature.animal, "Cat")==0) {
		cout << "Meow meow";
	}
	else if (strcmp(creature.animal, "Pig")==0) {
		cout << "Hush hush";
	}
	else if (strcmp(creature.animal, "Dog")==0) {
		cout << "Woof woof";
	}
	else if (strcmp(creature.animal, "Cow")==0) {
		cout << "Moo moo";
	}
	else {
		cout << "Erorr";
	}
	
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
	/*Boiler boiler;
	cout << "Enter \n 1.Firma \n2.Color\n3.Power\n4.Temperature\n5.Amount" << endl;
	cin >> boiler.firma >> boiler.color >> boiler.power;
	cin >> boiler.temperature >> boiler.amount;
	PrintBoiler(boiler);*/

	//завдання 4
	Animal creature;
	int n = 0;
	Fulling(creature, n);
	Print(creature, n);
	Voice(creature);
	
	return 0;
}