#include <stdio.h>
#include <stdlib.h>

//Actual Class
// Both "struct rect" and Rect are the same
// pRect defines a pointer type to a Rect
typedef struct rect{
  double w;
  double l; 
} Rect;
typedef Rect *pRect; //Means "*pRect" is of type Rect

//Constructor
pRect Rectangle(double, double);
void destroyRectangle(pRect);
//Methods
double Perimeter(pRect);
double Area(pRect); 
void setDim(pRect, double, double);
void toString(pRect);
