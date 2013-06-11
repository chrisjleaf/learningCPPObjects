#include "stdio.h"
#include "rect.h"


int main(int argc, char *argv[]){
  double w = 5.0, l = 2.0;
  printf("w = %lf, l = %lf\n", w, l);

  //Create First Object
  printf("MyRect:\n")
  pRect myRect = Rectangle(w, l);
  toString(myRect);
  printf("Perimeter = %lf\n", Perimeter(myRect) );
  printf("Area = %lf\n", Area(myRect) );
  
  //Create another Object
  printf("HisRect:\n");
  pRect hisRect = Rectangle(1.0, 1.0);
  toString(hisRect);
  printf("Perimeter = %lf\n", Perimeter(hisRect) );
  printf("Area = %lf\n", Area(hisRect) );

  //Clearly myRect is still the same
  printf("\nAnd myRect is still:\n");
  toString(myRect);

  return 0;
}
