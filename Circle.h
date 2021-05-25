#include "Shape.h"

class Circle:public Shape {
    public:
        Circle();
        Circle(int,int,int);
        void draw();
    private:
        int r;
};

Circle::Circle(){
    r = 0;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY){
    r = valR;
}
void Circle::draw(){
    cout << "Soy un Circulo" <<endl;
}
