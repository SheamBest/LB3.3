// LB3.3.cpp
// < Шельвах Максим >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (x <= -4)
		y = x + 3;
	else
		if (-4 <= x && x <= -2)
			y = 1;
		else
			if (-2 < x && x <= 4)
				y = -x - 5;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = -R + sqrt(pow(R, 2) - (pow((x - 8), 2)));

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
