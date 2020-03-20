#include "circle.h"
#include <iostream>
#include <string>



Circle::Circle()
{

}

Circle::Circle(double length):Shape(1,length)
{
    typeshape="Circle";
}

void Circle::printCircle()
{
    cout <<"Esto es un "<<typeshape<<" , que tiene infinitos lados y su radio mide "<<l_length<<","
           "Su perimetro, que en circulos se llama longitud es "<<getPerimeter()<<" y su area es "<<getArea()<<".\n"
           "Su diagonal es el diametro, que es "<<getDiagonal()<<".\n";
           //si quieres comprobarlo, el método getDiag está en shape y funciona en todaslas figuras.

}
void Circle::drawCircle()
{
    float pr = 2;
    double l_length = getL_length();
    for (double i{ -l_length }; i <= l_length; i++) {
        for (double j = -l_length; j <= l_length; j++) {
            float d = ((i * pr) / l_length) * ((i * pr) / l_length) + (j / l_length) * (j / l_length);
            if (d > 0.95 && d < 1.08) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
