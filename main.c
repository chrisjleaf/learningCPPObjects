#include "stdio.h"
#include "rect.h"


int main(int argc, char *argv[]){
  double w = 5.0, l = 2.0;
  printf("w = %lf, l = %lf\n", w, l);
  toString();
  Rectangle(w, l);
  toString();

  printf("Perimeter = %lf\n", Perimeter() );
  printf("Area = %lf\n", Area() );

  return 0;
}
