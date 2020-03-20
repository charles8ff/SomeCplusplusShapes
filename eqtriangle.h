#ifndef EQTRIANGLE_H
#define EQTRIANGLE_H
#include "shape.h"

using namespace std;

class EqTriangle: public Shape
{
public:
    EqTriangle();
    EqTriangle(double length);
    double getHeigh();
    void printEqTriangle();
    void drawEqTriangle();
};

#endif // EQTRIANGLE_H
