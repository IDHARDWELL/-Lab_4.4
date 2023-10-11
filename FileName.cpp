// Lab_04_4.cpp
// < Постолюк Максим >
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 22
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	double x, xp, xk, dx;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "|" << setw(13) << "Variant 22" << setw(3) << "|" << endl;
	cout << " ---------------" << endl;
	cout << "|" << setw(4) << "x" << setw(4) << "|" << setw(4) << "y"<< setw(4) << "|" << endl;
	for (x = xp; x < xk; x += dx)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = -R + (R / (-R - 8)) * (x + 8);
			else
				if (-R < x && x <= R)
					y = -sqrt(R * R - x * x);
				else
					if (x > R && x < 5)
						y = (2 / (5 - R)) * (x - R);
					else
						y = 3;
		cout << "|" << setw(4) << setprecision(2) << x << setw(4) << "|" << setw(4) << setprecision(2) << y << setw(4)<< "|" << endl;
	}
	cin.get();
	return 0;
}