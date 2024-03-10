#include "ellipticCurve.hpp"


EllipticCurve::EllipticCurve()
{
}

EllipticCurve::EllipticCurve(const Polynom& p1, const Polynom& p2, int m) : y(p1), x(p2)
{
    if (0 >= m)
        throw "mod <= 0";
    mod = m;
}

EllipticCurve::EllipticCurve(int a, int b, int m)
{
    if (0 >= m)
        throw "mod <= 0";
    y = Polynom({0, 0, 1});
    x = Polynom({b, a, 0, 1});
    mod = m;
}

EllipticCurve::~EllipticCurve()
{
}

void EllipticCurve::setMod(int m)
{
    if (0 >= m)
        throw "mod <= 0";
    else
        mod = m;
}