// Lab_03_4.cpp
// Ковба Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;
	
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if ((y >= (x - 1) * (x -1) && y <= sqrt (R * R - x * x) && x >= 0) || (y >= - sqrt (R * R - x * x) && y <= 0 && x<=0))
		cout << "yes" << endl; 
	else 
		cout << "no" << endl;

	cin.get();
	return 0;

}