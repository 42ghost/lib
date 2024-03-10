#ifndef ELLIPTICCURVE_HPP
#define ELLIPTICCURVE_HPP

#include "polynom.hpp"

class EllipticCurve
{
private:
    Polynom y;
    Polynom x;
    int mod;
public:
    EllipticCurve();
    EllipticCurve(const Polynom&, const Polynom&, int m);
    EllipticCurve(int a, int b, int m);
    /*
    Add EllipticCurve(const Matrix&); Matrix[X][Y]
    K = 2 or 3 ...
    */
    ~EllipticCurve();

    void setMod(int m);
};

#endif