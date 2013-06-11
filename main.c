#include "stdio.h"
#include "rect.h"


int main(int argc, char *argv[]){
  double w = 5.0, l = 2.0;
  printf("w = %lf, l = %lf\n", w, l);


  printf("Perimeter = %lf\n", Perimeter(w,l) );
  printf("Area = %lf\n", Area(w,l) );

  return 0;
}
