#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

using namespace std;


class Square: public Shape
{
public:
    Square();
    Square(double length);
    void printSquare();
    void drawSquare();

};

#endif // SQUARE_H
