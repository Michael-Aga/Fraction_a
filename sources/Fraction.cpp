#include "Fraction.hpp"

using namespace std;
using namespace ariel;

int Fraction::getNumerator(){
    return this->numerator;
};

int Fraction::getDenominator(){
    return this->denominator;
};

Fraction Fraction::operator+(Fraction)
{
    return Fraction(1, 1);
};

Fraction Fraction::operator+(double)
{
    return Fraction(1, 1);
};

Fraction Fraction::operator-(Fraction)
{
    return Fraction(1, 1);
};

Fraction Fraction::operator-(int)
{
    return Fraction(1, 1);
};

Fraction Fraction::operator*(Fraction)
{
    return Fraction(1, 1);
};

Fraction Fraction::operator/(Fraction)
{
    return Fraction(1, 1);
};

bool Fraction::operator==(Fraction)
{
    return false;
};

bool Fraction::operator>(Fraction)
{
    return false;
};

bool Fraction::operator>(double)
{
    return false;
};

bool Fraction::operator<(Fraction)
{
    return false;
};

bool Fraction::operator>=(Fraction)
{
    return false;
};

bool Fraction::operator<=(Fraction)
{
    return false;
};

Fraction &Fraction::operator++()
{
    return *this;
}; // Prefix

const Fraction Fraction::operator++(int)
{
    return Fraction(1, 1);
}; // Postfix

Fraction &Fraction::operator--()
{
    return *this;
}; // Prefix

const Fraction Fraction::operator--(int)
{
    return Fraction(1, 1);
}; // Postfix

ostream &ariel::operator<<(std::ostream &os, Fraction myFraction)
{
     return (os << myFraction.getNumerator() << '/' << myFraction.getDenominator());
};

istream &ariel::operator>>(std::istream & is, Fraction myFraction)
{
    return is;
};

Fraction ariel::operator*(double, Fraction)
{
    return Fraction(1, 1);
};

bool ariel::operator==(Fraction, Fraction){
    return false;
};
