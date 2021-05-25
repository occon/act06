#include <iostream>
using namespace std;

#ifndef Shape_h
#define Shape_h

class Shape{
    public:
        Shape();
        Shape(int, int);
        virtual void draw();
        int getValueX();
        int getValueY();
    private:
        int x;
        int y;
};

Shape::Shape(){
    x = 0;
    y = 0;
}

Shape::Shape(int valX, int valY){
    x = valX;
    y = valY;
}

void Shape::draw() {  // VIRTUAL only in declaration
    cout << "Soy una Figura" << endl;
}

int Shape::getValueX(){
    return x;
}

int Shape::getValueY(){
    return y;
}

#endif