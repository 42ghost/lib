#include "polynom.hpp"

Polynom::Polynom()
{
}

Polynom::Polynom(const Polynom& p) : coeffs(p.coeffs)
{
}

Polynom::Polynom(const std::vector<int>& k) : coeffs(k) // ?coeff(move(k))?
{
}

Polynom::~Polynom(){}

std::vector<int> Polynom::getCoeffs()
{
    return coeffs;
}

int Polynom::getCoeff(uint32_t i)
{
    if (0 <= i < coeffs.size())
        return coeffs[i];
    throw "Index out of range";
}

uint32_t Polynom::getDeg(){
    return coeffs.size();
}

void Polynom::setPolynom(const Polynom& p)
{
    coeffs = p.coeffs;
}

void Polynom::setPolynom(const std::vector<int>& k)
{
    coeffs = k;
}

int Polynom::operator[](uint32_t i)
{
    if (0 <= i < coeffs.size())
        return coeffs[i];
    throw "Index out of range";
}

bool Polynom::operator==(const Polynom& p)
{
    if (coeffs.size() != p.coeffs.size())
    {
        return false;
    }

    for (int i = 0; i < coeffs.size(); ++i)
    {
        if (coeffs[i] != coeffs[i])
            return false;
    }

    return true;
}

bool Polynom::operator!=(const Polynom& p)
{
    return !(*this == p);
}
