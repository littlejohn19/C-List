#include <iostream>
#include "myList.h"
#include "point.h"

using namespace std;

int main(int argc, char *argv[])
{

    Point* first = new Point(4, 5);

    cout << first << endl;

    MyList list;
    list.addPoint(first);
}
