#ifndef _RECT2_H_
#define _RECT2_H_
// rect2.h
// Defines the Classes
#include <stdio.h>

class Rect{
  public: 
    //Made fields public...
    double w; 
    double l;

    //Constructor
    Rect(double, double); //Constructor, has the same name, no return type
    ~Rect(void);          //Destructor,  same name w/ a ~, no return type
  
    double  Perimeter(void);
    double  Area(void);
    virtual void    toString(void);
    
  private: 
    //Because Square now references the private variables it cannot 
    //be defined as private, otherwise it cannot reference them. 
}; 

class Square : public Rect{
  public: 
    Square(double);
    ~Square(void);

    virtual void    toString(void);
};
#endif //_RECT2_H_
