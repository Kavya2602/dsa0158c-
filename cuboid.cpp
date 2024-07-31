#include <iostream>

// Base class Shape
class Shape {
public:
    virtual void display() const = 0; // Pure virtual function for display
};

// Base class Rectangle
class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const {
        return length * width;
    }

    void display() const override {
        std::cout << "Rectangle: Length = " << length << ", Width = " << width << std::endl;
    }
};

// Derived class Cuboid
class Cuboid : public Rectangle {
private:
    double height;
public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double getVolume() const {
        return getArea() * height; // Area of base (length * width) * height
    }

    double getSurfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }

    void display() const override {
        std::cout << "Cuboid: Length = " << length << ", Width = " << width << ", Height = " << height << std::endl;
        std::cout << "Surface Area = " << getSurfaceArea() << std::endl;
        std::cout << "Volume = " << getVolume() << std::endl;
    }
};

int main() {
    double length, width, height;
    
    std::cout << "Enter length of the cuboid: ";
    std::cin >> length;
    std::cout << "Enter width of the cuboid: ";
    std::cin >> width;
    std::cout << "Enter height of the cuboid: ";
    std::cin >> height;
    
    Cuboid cuboid(length, width, height);
    cuboid.display();
    
    return 0;
}

