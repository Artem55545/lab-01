/*******************
* Имя:Мусаев Артём *
* Задание: 1       *
* Вариант: 3       *
*******************/

#include <iostream>
#include <cmath>

int main() {
  using namespace std;
  
  //ввод всех переменных
  
  double alpha = 14;
  int viNull = 750;
  double g = 9.81;
  double pi = M_PI;
  double j;
  double h;
  double l;
  double r1;
  double r2;
  
  //Расчёт всех переменных
  
  j = ((2 * viNull * sin((alpha * pi)/180)))/g;
  h = ((viNull * viNull * sin((alpha * pi)/180) * sin((alpha * pi)/180)))/(2 * g);
  l = ((viNull * viNull * sin(2 * ((alpha * pi)/180))))/g;
  r1 = (viNull * viNull)/(g * cos((alpha * pi)/180));
  r2 = (viNull * viNull * cos((alpha * pi)/180) * cos((alpha * pi)/180))/g;
  
  //вывод всех переменных
  
  cout << j << endl;
  cout << h << endl;
  cout << l << endl;
  cout << r1 << endl;
  cout << r2 << endl;


  return 0;
}
