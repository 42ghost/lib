#ifndef POLYNOM_HPP
#define POLYNOM_HPP

#include <vector>
#include <cstdint>

class Polynom
{
private:
    std::vector<int> coeff; // coeffs of polynom
    uint32_t r; // degree of polynomial
public:
    Polynom();
    Polynom(const Polynom&);
    Polynom(const std::vector<int>&);  // coeffs 
    Polynom(const std::vector<int>&, const int); // coeffs + r
    ~Polynom();

    int getCoeff(int uint32_t);

    void setPolynom(const Polynom&);
    void setPolynom(const std::vector<int>&);
    void setPolynom(const std::vector<int>&, const int);

    void shrink();
};

bool operator==(const Polynom&, const Polynom&);


#endif