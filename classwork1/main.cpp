#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
struct node {
    node *nextPtr;
    string element;
};


class list {
public:
    node *firsrEleement;

    list(node* element){
        firsrEleement=element;
    }
};


int main() {
    node myElement;
    myElement.nextPtr=NULL;
    myElement.element="first";
    Mylist(myElement*);


    return 0;
}
