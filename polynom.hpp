#ifndef POLYNOM_HPP
#define POLYNOM_HPP

#include <vector>
#include <cstdint>

class Polynom
{
private:
    std::vector<int> coeffs; // coeffs of polynom
public:
    Polynom();
    Polynom(const Polynom&);
    Polynom(const std::vector<int>&);  // coeffs
    ~Polynom();

    std::vector<int> getCoeffs();
    int getCoeff(uint32_t);
    uint32_t getDeg();

    void setPolynom(const Polynom&);
    void setPolynom(const std::vector<int>&);
    void setPolynom(const std::vector<int>&, const int);

    void shrink();
    
    bool operator==(const Polynom&);
    bool operator!=(const Polynom&);
};


#endif