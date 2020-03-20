#include "square.h"
#include <iostream>

using namespace std;


Square::Square()
{

}

Square::Square(double length):Shape(4,length)
{
    typeshape="Square";
}

void Square::printSquare()
{
    cout <<"Esto es un "<<typeshape<<", que tiene "<<n_sides<<"lados y cada lado mide "<<l_length<<","
           "y su altura es el lado.\n"
           "Su perimetro es"<<getPerimeter()<<"y su area es "<<getArea()<<".\n"
           "No tiene sentido calcular su diagonal,porque por definicion, es igual al lado.\n"
           "Otro dato interesante es que la apotema,"<<apth<<" es igual a la mitad del lado";
}

void Square::drawSquare()
{
    for (int i{1}; i < l_length; i++)
        {
            for (int j{1}; j < l_length; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
}
