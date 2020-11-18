#pragma once
#include <iomanip>
#include <iostream>

using namespace std;

class Tech
{
public:
	
	string place;
	string brand;

	void info(){

	}
	Tech() {
	}
	virtual void vvod() {
		cout << "Brand: " << endl;
		cin >> brand;
		cout << endl << "Mesto ispolzovaniya: " << endl;
		cin >> place;
		//cout << endl << "tip: " << type << "    " << "Mesto: " << place <<endl;
	}
};

class Fridge : public Tech {
public:
	int height=0;
	int count_p=0;
	Fridge() {
	}
	void vvod() {
		cout << "Fridge" << endl;
		Tech::vvod();
		cout << "Visota: " << endl;
		cin >> height;
		cout << endl << "kolvo polok: " << endl;
		cin >> count_p;
		cout << endl << "tip: " << brand << "    " << "Mesto: " << place << " Visota: " << height << " kolvo polok: " << count_p << endl;
	}
};

class Microwave : public Tech {
public:
	int voltage;
	string color;
	Microwave(){}
	void vvod() {
		cout << "Microwave" << endl;
		Tech::vvod();
		cout << "Voltage: " << endl;
		cin >> voltage;
		cout << endl << "Color: " << endl;
		cin >> color;
		cout << endl << "Brand: "  << brand << " Mesto: " << place << " Voltage: " << voltage << " Color: " << color << endl;
	}
};

class TV : public Tech {
public:

	string type_display;
	int diagonal;
	TV(){}
	void vvod() {
		cout << "TV" << endl;
		Tech::vvod();
		cout << "type display: " << endl;
		cin >> type_display;
		cout << endl << "Diagonal: " << endl;
		cin >> diagonal;
		cout << endl << "Brand: " << brand << " Mesto: " << place << " Type display: " << type_display << " Diagonal: " << diagonal << endl;

	}
};
