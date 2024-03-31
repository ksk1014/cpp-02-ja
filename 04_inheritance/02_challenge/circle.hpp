// コードを入力してください

#include "shape.hpp"

class Circle : public Shape {
public:
    Circle(double radius) : m_radius(radius) {}
    double getArea() { return 3.14159 * m_radius * m_radius; }

private:
    double m_radius;
};