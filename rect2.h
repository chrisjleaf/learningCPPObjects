#ifndef _RECT2_H_
#define _RECT2_H_
// rect2.h
// Defines the Classes
#include <stdio.h>

class Rect{
  public: 
    Rect(double, double); //Constructor, has the same name, no return type
    ~Rect(void);          //Destructor,  same name w/ a ~, no return type
  
    double  Perimeter(void);
    double  Area(void);
    void    toString(void);
    
  private: 
    double w; 
    double l;
}; 

class Square : public Rect{
  public: 
    Square(double);
    ~Square(void);
};
#endif //_RECT2_H_
