#ifndef _RECT_H_
#define _RECT_H_
#include <stdio.h>
#include <stdlib.h>

//Actual Class
// Both "struct rect" and Rect are the same
// pRect defines a pointer type to a Rect
typedef struct rect{
  //Fields
  double w;
  double l; 
  
  //Methods
  //If * is not inside () it means a function returning a pointer to a double
  double (*Perimeter) (struct rect *);   
  double (*Area)      (struct rect *);   
  void   (*setDim)    (struct rect *, double, double);   
  void   (*toString)  (struct rect *);
  void   (*destroy)   (struct rect *);
} Rect;
typedef Rect *pRect; //Means "*pRect" is of type Rect

//Constructor
pRect Rectangle(double, double);

#endif //_RECT_H_
