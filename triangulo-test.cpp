#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangulo.hpp"
#include "triangulo.cpp"

TEST_CASE("Testando casos que daria algum bug no perimetro")
{
    CHECK(getPerimeter() == 0);
    CHECK(getPerimeter() < 0);
    CHECK(getPerimeter() = 2);   
}


TEST_CASE("testando area")
{
    CHECK(getArea() == 0);
    CHECK(getArea() < 0);
    CHECK(getArea() == 2);
}


TEST_CASE("testando kind")
{
    CHECK(getKind() == isIsoceles);
    CHECK(getKind() == isEquilatero);
    CHECK(getKind() == isScalene);
}