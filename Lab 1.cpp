/************************
* Имя:     Мусаев Артём *
* Задание: 1            *
* Вариант: 3            *
************************/

#include <iostream>
#include <cmath>

int main() {
  using namespace std;

  double alpha = 14;
  int viNull = 750;
  double g = 9.81;
  double pi = M_PI;
  double j;
  double h;
  double l;
  double r1;
  double r2;

  j = ((2 * viNull * sin((alpha * pi) / 180))) / g;
  h = ((pow(viNull, 2) * pow(sin((alpha * pi) / 180), 2))) / (2 * g);
  l = ((pow(viNull, 2) * sin(2 * ((alpha * pi) / 180)))) / g;
  r1 = (pow(viNull, 2)) / (g * cos((alpha * pi) / 180));
  r2 = (pow(viNull, 2) * pow(cos((alpha * pi) / 180), 2)) / g;

  cout << j << '\n' << h << '\n' << l << '\n' << r1 << '\n' << r2 << endl;

  return 0;
}
