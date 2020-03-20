#include "shape.h"
#include <math.h>

Shape::Shape()
{

}

Shape::Shape(int sides, double length)
{
    if (length<=0) throw string {"You can't have 0 or less as a meausure asshole."};
    sides=n_sides;
    length=l_length;
    apth= l_length / (2 * tan((180 / n_sides) * M_PI / 180));
}

double Shape::getArea()
{   if(n_sides==1) return (pow(l_length,2)*M_PI);//r^2*pi
    else if(n_sides==3) return (l_length * apth / 2); //(b*h/2)
    else return (l_length * apth / 2)*(n_sides); //(b*h/2)*numero de triángulos
}

double Shape::getPerimeter()
{
    if(n_sides==1) return 2*M_PI*l_length;//2*pi*R
    else return n_sides * l_length;
}

double Shape::getDiagonal()
{
    if(n_sides==1) return 2*l_length;
    else if (n_sides==3) return l_length;
    else return 2*(sqrt(pow((l_length/2),2)+pow(apth,2)));
    //si, he generalizado sacar la diagonal de un polígono de más de 3 lados porque soy un friki de la geomatría
}

int Shape::getN_sides() const
{
    return n_sides;
}

void Shape::setN_sides(int value)
{
    n_sides = value;
}

double Shape::getL_length() const
{
    return l_length;
}

void Shape::setL_length(double value)
{
    l_length = value;
}

double Shape::getApth() const
{
    return apth;
}

void Shape::setApth(double value)
{
    apth = value;
}

string Shape::getTypeshape() const
{
    return typeshape;
}

void Shape::setTypeshape(const string &value)
{
    typeshape = value;
}
