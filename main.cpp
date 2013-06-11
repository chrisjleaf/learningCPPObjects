#include <stdio.h>
#include "rect2.h"

int main(int argc, char *argv[]){
  Rect myRect   = Rect(5.0, 2.0);
  myRect.toString();
  printf("Perimeter = %lf\n", myRect.Perimeter());
  printf("Area = %lf\n", myRect.Area() );

  Rect hisRect  = Square(1.0);
  hisRect.toString();
  printf("Perimeter = %lf\n", hisRect.Perimeter());
  printf("Area = %lf\n", hisRect.Area() );
  
  //Clearly myRect is still the same
  printf("\nAnd myRect is still:\n");
  myRect.toString();
  return 0;
}
