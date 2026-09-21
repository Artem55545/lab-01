/*******************
*  Мусаев Артём    *
*     ПИ -261      *
*     Вар 3        *
*******************/

#include <iostream>
#include <cmath>

int main() {
  int alpha = 14;
  int Vo = 750;
  double g = 9.81;
  double PI = M_PI;
    
  double j; 
  j = ((2 * Vo * sin((alpha * PI)/180)))/g;
  std::cout<< j <<std::endl;
   
  double h; 
  h = ((Vo * Vo * sin((alpha * PI)/180) * sin((alpha * PI)/180)))/(2*g);
  std::cout<< h <<std::endl;
   
  double L; 
  L = ((Vo * Vo * sin( 2*((alpha * PI)/180))))/g;
  std::cout<< L <<std::endl;
   
  double R1; 
  R1 = (Vo * Vo)/(g * cos((alpha * PI)/180));
  std::cout<< R1 <<std::endl;
   
  double R2; 
  R2 = (Vo * Vo * cos((alpha * PI)/180) * cos((alpha * PI)/180))/g;
  std::cout<< R2 <<std::endl;

  return 0;
}
