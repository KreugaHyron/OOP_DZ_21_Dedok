#include <iostream>
#include <cmath>
using namespace std;
class Figure {
protected:
    double side;
public:
    Figure(double side) : side(side) {}
    double getSide() const {
        return side;
    }
    void setSide(double side) {
        this->side = side;
    }
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    double M_PI = 3.14;
    virtual void printInfo() const {
        cout << "Figure" << endl;
        cout << "Side: " << side << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
class Triangle : public Figure {
public:
    Triangle(double side) : Figure(side) {}

    double calculateArea() const {
        return (sqrt(3) / 4) * side * side;
    }
    double calculatePerimeter() const {
        return 3 * side;
    }
    void printInfo() const {
        cout << "Triangle" << endl;
        cout << "Side: " << side << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
class Square : public Figure {
public:
    Square(double side) : Figure(side) {}
    double calculateArea() const {
        return side * side;
    }
    double calculatePerimeter() const {
        return 4 * side;
    }
    void printInfo() const {
        cout << "Square" << endl;
        cout << "Side: " << side << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
class Rectangle : public Figure {
private:
    double width;
public:
    Rectangle(double side, double width) : Figure(side), width(width) {}
    double getWidth() const {
        return width;
    }
    void setWidth(double width) {
        this->width = width;
    }
    double calculateArea() const {
        return side * width;
    }
    double calculatePerimeter() const {
        return 2 * (side + width);
    }
    void printInfo() const {
        cout << "Rectangle" << endl;
        cout << "Side: " << side << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
class Circle : public Figure {
public:
    Circle(double side) : Figure(side) {}
    double calculateArea() const {
        return M_PI * side * side;
    }
    double calculatePerimeter() const {
        return 2 * M_PI * side;
    }
    void printInfo() const {
        cout << "Circle" << endl;
        cout << "Radius: " << side << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
int main() {
    Triangle triangle(5.0);
    triangle.printInfo();
    cout << endl;
    Square square(4.0);
    square.printInfo();
    cout << endl;
    Rectangle rectangle(3.0, 6.0);
    rectangle.printInfo();
    cout << endl;
    Circle circle(2.5);
    circle.printInfo();
    return 0;
}