#include <iostream>
#include "shape.h"
#include "eqtriangle.h"
#include "circle.h"
#include "square.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    int mainchoice{0};
    vector<Circle*>circles;
    vector<EqTriangle*>triangles;
    vector<Square*>squares;
    try{
        do{
            cout<<"Guelcome, press 0 to input a shape, or 1 to end and show all shapes.\n\t>>"<<endl;
            cin>> mainchoice;
            if (mainchoice!=0 &&mainchoice !=1) throw string {"Invalid choice in primary menu."};
            if (mainchoice==0){
                int choice{0};
                cout<<"Choose which shape to draw between:\n"
                      "\tCircle: Press 1.\n"
                      "\tTriangle: Press 2.\n"
                      "\tSquare: Press 3.\n\t>>";
                cin>> choice;
                double data{0};
                switch (choice)
                {
                    case 1:
                        cout<<"Input the radius of ur circle: \n\t>>";
                        cin>> data;
                        circles.push_back(new Circle(data));
                        break;
                    case 2:
                        cout<<"Input the length of the side of ur triangle: \n\t>>";
                        cin>> data;
                        triangles.push_back(new EqTriangle(data));
                        break;
                    case 3:
                        cout<<"Input the length of the side of ur square: \n\t>>";
                        cin>> data;
                        squares.push_back(new Square(data));
                        break;
                    default:
                        throw string{"Invalid choice in shapes menu."};
                        break;
                }
            }
        }while(mainchoice!=1);

        for (auto const& elem:circles){
            elem->drawCircle();
        }
        for (auto const& elem:triangles){
            elem->drawEqTriangle();
        }
        for (auto const& elem:squares){
            elem->drawSquare();
        }
        Circle c1 (4);
    }catch(string e){
        cout<<"Error:  "<<e<<endl;
    }
    return 0;
}
