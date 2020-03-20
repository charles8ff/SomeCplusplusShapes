#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

using namespace std;


class Circle: public Shape
{
public:
    Circle();
    Circle(double length);
    void printCircle();
    void drawCircle();
};

#endif // CIRCLE_H
