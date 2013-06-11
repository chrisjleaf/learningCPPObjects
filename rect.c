#include "rect.h"

static double w = 0.0;
static double l = 0.0;

void Rectangle(double x, double y){
  w = x; 
  l = y;
}

double Perimeter(void){
  return 2 * w + 2 * l; 
}
double Area(void){
  return w * l;
}

void setDim(double x, double y){
  w = x; 
  l = y;
}

void toString(void){
  printf("[%lf,%lf]\n", w, l);
}
