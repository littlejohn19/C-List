#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>
#include "point.h"

class MyList
{
private:
    Point* head;
    Point* tail;

public:
    MyList();
    void addPoint(Point* newObj);
//    void addPoint(Point* newObj, int position);
//    void removePoint(int position);
};

#endif // LIST_H
