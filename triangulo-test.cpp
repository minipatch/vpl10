#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangulo.hpp"

    shapes::Triangle t1(3,3,3);
    shapes::Triangle t2(7,5,3);
    shapes::Triangle t3(4,3,3);


TEST_CASE("Testando o perimetro e casos negativos")
{
    CHECK(t1.getPerimeter() == 9);
    CHECK(t2.getPerimeter() == 17);
    CHECK(t3.getPerimeter() ==  10);
}



TEST_CASE("testando a area e situações extremas")
{
    CHECK(t1.getArea() <=  DBL_MAX);
    CHECK(t2.getArea() >= 0);
    CHECK(t3.getArea() >= -4);
}



TEST_CASE("testando a kind")
{
    //como testar isso harkljhkalrjh
    CHECK(t1.getKind() == shapes::Triangle::Kind::ISOSCELES);
    CHECK(t2.getKind() == shapes::Triangle::Kind::SCALENE);
    CHECK(t3.getKind() == shapes::Triangle::Kind::ISOSCELES);

}
