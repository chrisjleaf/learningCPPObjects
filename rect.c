#include "rect.h"

//Using malloc
//void *ptr = malloc( #bytes) 
//  and sizeof(datatype) is a useful COMPILER function that equates to the 
//number of bytes in a datatype
//Better to make sure the "types agree" 
//int *ptr = (int *)malloc( sizeof(int) )

pRect Rectangle(double w, double l){
  pRect this = (pRect)malloc( sizeof(Rect) );
//Rect *this = (Rect*)malloc( sizeof(Rect) ); //Equivalent statement

  //These names for w and l are not conflicting because 
  this->w = w;   //~= (*pRect).w meaning Rect.w
  this->l = l;   //~= (*pRect).l meaning Rect.d
  return this;
}

//(pRect this) ~= (Rect *this)
void destroyRectange(pRect this){
  free(this); 
} 

//(pRect this) ~= (Rect *this)
double Perimeter(pRect this){
  return 2 * (this->w) + 2 * (this->l); 
}
//(pRect this) ~= (Rect *this)
double Area(pRect this){
  return (this->w) * (this->l);
}

void setDim(pRect this, double w, double l){
  this->w = w; 
  this->l = l;
}

void toString(pRect this){
  printf("[%lf,%lf]\n", this->w, this->l);
}
