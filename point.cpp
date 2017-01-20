#include "point.h"

Point::Point(int a, int b){
    this->a = a;
    this->b = b;
    this->next = NULL;
}

Point* Point::getNext(){
    return this->next;
}

void Point::setNext(Point *next){
    this->next = next;
}

ostream & operator <<(ostream &myOut, Point &copy)
{
    myOut << "a: " << copy.a << " b:" << copy.b;
    return myOut;
}
