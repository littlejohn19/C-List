#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
private:
    int a;
    int b;
    Point* next;

public:
    Point(int a, int b);
    Point* getNext();
    void setNext(Point* next);
    friend ostream &operator <<(ostream &myOut, Point &copy);
};

#endif // POINT_H
