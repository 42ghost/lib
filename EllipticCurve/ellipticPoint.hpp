#ifndef ELLIPTICPOINT_HPP
#define ELLIPTICPOINT_HPP

#include <vector>

class EllipticPoint
{
private:
    std::pair<int, int> point;
    bool inf;
public:
    EllipticPoint();
    EllipticPoint(std::pair<int, int>);
    ~EllipticPoint();
};

#endif