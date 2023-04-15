#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("Imposible situation")
{
    CHECK_THROWS(Fraction(0, 0));
}

TEST_CASE("Test the Fraction functions")
{
    Fraction a(1, 2), b(1, 2);

    CHECK(a + b == Fraction(1, 1));
    CHECK(a - b == Fraction(0, 1));
    CHECK(a * b == Fraction(1, 4));
    CHECK(a++ == Fraction(3, 2));
    CHECK(a-- == Fraction(1, 2));
    CHECK(b++ == Fraction(3, 2));
    CHECK(b-- == Fraction(1, 2));
    CHECK(a / b == Fraction(1, 1));
    CHECK(a - b + b == a);
    CHECK(a * b / b == a);
    CHECK(a * b * a == Fraction(1, 8));
    CHECK_NOTHROW(cout << a);
    CHECK_NOTHROW(cout << b);

    for (int i = 0; i < 100; i++)
    {
        CHECK(a++ == (Fraction(1,2) + i));
    }
    
}