//
// Created by Jan Stryszewski on 10/04/2022.
//

#ifndef ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H
#define ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H
#include "shape.h"

namespace Shapes {

    enum class ShapeOperation {INTERSECTION, SUM, DIFFERENCE};

    class ShapeComposite : public Shape {

        std::shared_ptr<Shape> sh1;
        std::shared_ptr<Shape> sh2;
        ShapeOperation op;
    public:

        ShapeComposite(std::shared_ptr<Shape> shape1, std::shared_ptr<Shape> shape2, ShapeOperation operati):
        sh1(shape1), sh2(shape2), op(operati){};

        bool isIn(int x, int y) const override{

            switch (op) {
                case ShapeOperation::SUM:
                    if(sh1->isIn(x,y) || sh2->isIn(x,y))
                        return true;
                    return false;

                case ShapeOperation::INTERSECTION:
                    if(sh1->isIn(x,y) && sh2->isIn(x,y))
                        return true;
                    return false;

                case ShapeOperation::DIFFERENCE:
                    if(sh1->isIn(x,y) && !sh2->isIn(x,y))
                        return true;
                    return false;
            };
        }

    };
}

#endif //ZAD4SHAPEDRAWING_SHAPECOMPOSITE_H
