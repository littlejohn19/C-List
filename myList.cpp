#include "myList.h"

MyList::MyList(){
    this->head = 0;
}

void MyList::addPoint(Point* newObj){

    if(this->head == 0){
        this->head = newObj;
    }
    else {
        Point* tmp = this->head;

        while(tmp->getNext()){
            tmp->setNext(tmp->getNext());
        }
        tmp->setNext(newObj);
    }
}
