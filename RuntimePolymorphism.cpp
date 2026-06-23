#include <iostream>
using namespace std;

class Shape {
public:
    // Late Binding
    // Decision at RunTime to call draw Method
    // Runtime Polymorphism achieved using virtual keyword
    virtual void draw() {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape {
public: 
    void draw() override{
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape {
public: 
    void draw() override{
        cout << "rectangle drawing..." << endl;
    }
};

class Triangle : public Shape {
public: 
    void draw() override{
        cout << "triangle drawing..." << endl;
    }
};

void shapeDrawing(Shape *s) {
    s->draw();
}

int main() {
    Circle c;
    Rectangle r;
    Triangle *t = new Triangle();
    shapeDrawing(&r);  
    shapeDrawing(&c);
    shapeDrawing(t);

    // Shape *s = new Shape();
    // s->draw();

    // Upcasting
    // Shape *s = new Circle();
    // s->draw();

    // Circle *c = new Circle();
    // c.draw();


    return 0;
}