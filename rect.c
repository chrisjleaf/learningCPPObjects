#include "rect.h"

//Local definitions, no one else can see them
static double Perimeter(pRect);
static double Area(pRect); 
static void toString(pRect);
static void Destroy(pRect);
//Using malloc
//void *ptr = malloc( #bytes) 
//  and sizeof(datatype) is a useful COMPILER function that equates to the 
//number of bytes in a datatype
//Better to make sure the "types agree" 
//int *ptr = (int *)malloc( sizeof(int) )

pRect Square(double w){
  return Rectangle(w, w);
}

pRect Rectangle(double w, double l){
  pRect this = (pRect)malloc( sizeof(Rect) );
//Rect *this = (Rect*)malloc( sizeof(Rect) ); //Equivalent statement

  //These names for w and l are not conflicting because 
  this->w = w;   //~= (*pRect).w meaning Rect.w
  this->l = l;   //~= (*pRect).l meaning Rect.d

  //Set up methods to reference the correct stuff
  this->Perimeter = &Perimeter;
  this->Area      = &Area;
  this->toString  = &toString;
  this->destroy   = &Destroy;

  return this;
}

//(pRect this) ~= (Rect *this)
void Destroy(pRect this){
  free(this); 
} 

//(pRect this) ~= (Rect *this)
static double Perimeter(pRect this){
  return 2 * (this->w) + 2 * (this->l); 
}
//(pRect this) ~= (Rect *this)
static double Area(pRect this){
  return (this->w) * (this->l);
}

static void toString(pRect this){
  printf("[%lf,%lf]\n", this->w, this->l);
}

