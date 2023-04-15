#include <iostream>
#include <stdio.h>

namespace ariel{
    class Fraction{
        private:
        int numerator;// The one on top
        int denominator;// The one on the bottom

        public:
        Fraction(const int numerator,const int denominator) : 
        numerator(numerator) , denominator(denominator){};

        int getNumerator();
        int getDenominator();

        Fraction operator+(Fraction);
        Fraction operator+(double);
        Fraction operator-(Fraction);
        Fraction operator-(int);
        Fraction operator*(Fraction);
        Fraction operator/(Fraction);

        bool operator==(Fraction);
        bool operator>(Fraction);
        bool operator>(double);
        bool operator<(Fraction);
        bool operator>=(Fraction);
        bool operator<=(Fraction);

        Fraction& operator++(); // Prefix
        const Fraction operator++(int); // Postfix

        Fraction& operator--(); // Prefix
        const Fraction operator--(int); // Postfix

        friend std::ostream& operator<<(std::ostream& ,Fraction);
        friend std::istream& operator>>(std::istream& ,Fraction);

        friend Fraction operator*(double ,Fraction);
        friend bool operator==(Fraction, Fraction);
    };
};