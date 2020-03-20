#include "eqtriangle.h"
#include <iostream>
using namespace std;



EqTriangle::EqTriangle()
{

}

EqTriangle::EqTriangle(double length): Shape(3,length)
{
     typeshape="Equillateral Triangle";
}

double EqTriangle::getHeigh()
{
    return apth;//apth=l_length / (2 * tan((180 / n_sides) * M_PI / 180));
    // que es igual a sqrt[(l^2)-(l/2)^2]
}

void EqTriangle::printEqTriangle()
{
    cout <<"Esto es un "<<typeshape<<", que tiene "<<n_sides<<" lados y cada lado mide "<<l_length<<","
           " y su altura es "<< getHeigh()<<".\n"
           "Su perimetro es "<<getPerimeter()<<" y su área es "<<getArea()<<".\n"
           "No tiene sentido calcular su diagonal,porque por definicion, es igual al lado.\n"
           //si quieres comprobarlo, el método getDiag está en shape y funciona en todaslas figuras.
           "Otro dato interesante es que la apotema es igual a la altura";
}

void EqTriangle::drawEqTriangle()
{
    for (int i{1}; i <= l_length; i++)
        {
            for (int k {0}; k < (l_length - i); k++)
                cout << " ";
            for (int j {0}; j < i; j++)
                cout << "* ";
            cout << "\n";
        }
}
