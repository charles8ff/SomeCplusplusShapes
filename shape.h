#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;


class Shape
{
public:
    Shape();
    Shape(int sides,double length);
    double getArea();
    double getPerimeter();
    double getDiagonal();
    int getN_sides() const;
    void setN_sides(int value);

    double getL_length() const;
    void setL_length(double value);

    double getApth() const;
    void setApth(double value);

    string getTypeshape() const;
    void setTypeshape(const string &value);

protected:
    int n_sides;
    double l_length;
    double apth;
    string typeshape;


};

#endif // SHAPE_H
