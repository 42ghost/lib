#include "ellipticPoint.hpp"

EllipticPoint::EllipticPoint()
{
    inf = true;
}

EllipticPoint::EllipticPoint(std::pair<int, int> xy) : point(xy), inf(false)
{
}

EllipticPoint::~EllipticPoint()
{
}