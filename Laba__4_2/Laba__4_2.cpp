// Lab_03_1.cpp
// < Мриглоцька Ярина >
// Лабораторна робота № 4.2
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 6



#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = 5 * exp(3 * x);
		if (x <= -1.0)
			B = 3 + sin(abs(x));
		else
			if (-1.0 < x && x <= 3.0)
				B = 2 * exp((x / 4) - 1);
			else
				B = 7 - sqrt(2) * x * x * x;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
