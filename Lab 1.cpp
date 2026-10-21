/************************
* Имя:     Мусаев Артём *
* Задание: 1            *
* Вариант: 3            *
************************/

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double alpha;
	int viNull;
	double g;
	double pi = M_PI;
	double j;
	double h;
	double l;
	double r1;
	double r2;

	cout << " if alpha = 14; g =9.81; viNull =750" << endl
		 << "alha = ";
	cin >> alpha;
	cout << "g = ";
	cin >> g;
	cout << "viNull = ";
	cin >> viNull;

	j = ((2.0 * viNull * sin((alpha * pi) / 180.0))) / g;
	h = ((pow(viNull, 2.0) * pow(sin((alpha * pi) / 180.0), 2.0))) / (2.0 * g);
	l = ((pow(viNull, 2.0) * sin(2.0 * ((alpha * pi) / 180.0)))) / g;
	r1 = (pow(viNull, 2.0)) / (g * cos((alpha * pi) / 180.0));
	r2 = (pow(viNull, 2.0) * pow(cos((alpha * pi) / 180.0), 2.0)) / g;

	cout << "j =" << j << '\n'
		<< "h =" << h << '\n'
		<< "l =" << l << '\n'
		<< "r1 =" << r1 << '\n'
		<< "r2 =" << r2 << endl;

	return 0;
}
