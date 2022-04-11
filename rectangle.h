//
// Created by Jan Stryszewski on 09/04/2022.
//

#ifndef ZAD4SHAPEDRAWING_RECTANGLE_H
#define ZAD4SHAPEDRAWING_RECTANGLE_H
#include "shape.h"
namespace Shapes {

    class Rectangle : public Shape {

        int x1, xTo1;
        int y1, yTo1;

    public:
        Rectangle(int xF, int xT, int yF, int yT) : x1(xF), y1(xT), xTo1(yF), yTo1(yT) {};

        bool isIn(int x, int y) const override {
            if (x < x1 || x > xTo1 || y < y1 || y > yTo1)
                return false;
            return true;
        };
        int x()const{return x1;}
        int y()const{return y1;}
        int xTo()const{return xTo1;}
        int yTo()const{return yTo1;}

        ~Rectangle() = default;
    };

}
#endif //ZAD4SHAPEDRAWING_RECTANGLE_H
