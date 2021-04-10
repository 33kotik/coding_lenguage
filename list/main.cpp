#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
struct node {
    node *nextPtr;
    string element;
};


class mylist {
public:
    node *firsrEleement;
    int size;

//    list2(node* element){
//        firsrEleement=element;
//    }
    void reverse() {
        mylist newlist;
        while (firsrEleement->nextPtr != nullptr) {
            node *curElement = firsrEleement;
            node *prevElement;

            while (curElement->nextPtr != nullptr) {///0167
                prevElement = curElement;
                curElement = curElement->nextPtr;
            }
            newlist.append(curElement);
            prevElement->nextPtr = nullptr;
        }
        firsrEleement=newlist.firsrEleement;
    }

    void append(node *newElement) {
        node *curElement = firsrEleement;
        while (curElement->nextPtr != nullptr) {///

            curElement = curElement->nextPtr;
        }

        curElement->nextPtr = newElement;
    }
};


int main() {
    node* myElement=new node;
    myElement->nextPtr = nullptr;
    myElement->element = "first";
//    list2 Mylist( myElement);

    mylist list;
    list.firsrEleement=myElement;
    list.reverse();

    return 0;
}
