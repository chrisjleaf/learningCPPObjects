// rect.cpp
// Fills in the classes. 
#include "rect2.h"

//Under the name space Rect, define the Rect function/constructor
Rect::Rect(double w, double l){
  this->w = w;
  this->l = l;
}

Rect::~Rect(void){
}

double Rect::Perimeter(void){
  return 2*w + 2*l;
}

double Rect::Area(void){
  return w * l;
}

void Rect::toString(void){
  printf("[%lf,%lf]\n", w, l);
}

