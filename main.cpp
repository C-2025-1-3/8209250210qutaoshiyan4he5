#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << "Celsius\t"  << " Fahrenheit" << endl;
	cout << 40.0 << '\t' << celsius_to_fah(40.0) << endl;
	cout << 39.0 << '\t' << celsius_to_fah(39.0) << endl;
	cout << 31.0 << '\t' << celsius_to_fah(31.0) << endl;

	cout << "Fahrenheit" << '\t' << "Celsius" << endl;
	cout << 105.0 << '\t' << fahrenheit_to_cel(105.0) << endl;
	cout << 120.0 << '\t' << fahrenheit_to_cel(120.0) << endl;
	cout << 87.8<< '\t' << fahrenheit_to_cel(87.8) << endl;
}