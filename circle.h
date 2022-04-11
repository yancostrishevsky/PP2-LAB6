//
// Created by Jan Stryszewski on 09/04/2022.
//

#ifndef ZAD4SHAPEDRAWING_CIRCLE_H
#define ZAD4SHAPEDRAWING_CIRCLE_H
#include "shape.h"
namespace Shapes {

    class Circle : public Shape {
        int xCenter, yCenter;
        int radius;

    public:

        Circle(int x, int y, int r) : xCenter(x), yCenter(y), radius(r) {};

        bool isIn(int x, int y) const override{
            if( (x - xCenter)*(x-xCenter) + (y - yCenter)*(y -yCenter) > radius*radius)
                return false;
            return true;
        };

        int x()const{return xCenter;}
        int y()const{return yCenter;}

        int getRadius()const{return radius;}

        ~Circle() = default;
    };

}


#endif //ZAD4SHAPEDRAWING_CIRCLE_H
