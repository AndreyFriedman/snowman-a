#include "doctest.h"
#include "snowman.hpp"


#include <string>
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(21111111) == string("___ \n.....\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(31111111) == string("_\n/_\\\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(41111111) == string(" ___ \n(_*_)\n(.,.)\n<( : )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(12111111) == string("_===_\n(...)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(13111111) == string("_===_\n(._.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(14111111) == string("_===_\n(. .)\n<( : )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11211111) == string("_===_\n(o,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11311111) == string("_===_\n(O,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11411111) == string("_===_\n(-,.)\n<( : )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11121111) == string("_===_\n(.,o)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11131111) == string("_===_\n(.,O)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11141111) == string("_===_\n(.,-)\n<( : )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11112111) == string("_===_\n(.,.)\n\\( : )>\n( : )"));
    CHECK(ariel::snowman(11113111) == string("_===_\n(.,.)\n( : )>\n/( : )"));
    CHECK(ariel::snowman(11114111) == string("_===_\n(.,.)\n( : )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11111211) == string("_===_\n(.,.)\n<( : )/\n( : )"));
    CHECK(ariel::snowman(11111311) == string("_===_\n(.,.)\n<( : )\n( : )\\"));
    CHECK(ariel::snowman(11111411) == string("_===_\n(.,.)\n<( : ) \n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11111121) == string("_===_\n(.,.)\n<(] [)>\n( : )"));
    CHECK(ariel::snowman(11111131) == string("_===_\n(.,.)\n<(> <)>\n( : )"));
    CHECK(ariel::snowman(11111141) == string("_===_\n(.,.)\n<(   )>\n( : )"));

    CHECK(ariel::snowman(11111111) == string("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(ariel::snowman(11111112) == string("_===_\n(.,.)\n<( : )>\n(\"  \" )"));
    CHECK(ariel::snowman(11111113) == string("_===_\n(.,.)\n<( : )>\n(___)"));
    CHECK(ariel::snowman(11111114) == string("_===_\n(.,.)\n<( : )>\n(   )"));

    CHECK(ariel::snowman(22224422) == string(" ___ \n.....\n(o.o)\n(] [)\n(\"  \" )"));
    CHECK(ariel::snowman(33333333) == string("_\n/_\\\n(O_O)\n/(> <)\\\n(___)"));
    CHECK(ariel::snowman(44444444) == string(" ___ \n(_*_)\n(- -)\n(   )\n(   )"));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(ariel::snowman(1)); // too short
    CHECK_THROWS(ariel::snowman(22)); // too short
    CHECK_THROWS(ariel::snowman(123)); // too short
    CHECK_THROWS(ariel::snowman(1234)); // too short
    CHECK_THROWS(ariel::snowman(12341)); // too short
    CHECK_THROWS(ariel::snowman(123412)); // too short
    CHECK_THROWS(ariel::snowman(1234123)); // too short
    CHECK_THROWS(ariel::snowman(123412341)); // too long

    CHECK_THROWS(ariel::snowman(92341234)); // to acceptable number
    CHECK_THROWS(ariel::snowman(82341234)); // to acceptable number
    CHECK_THROWS(ariel::snowman(72341234)); // to acceptable number
    CHECK_THROWS(ariel::snowman(62341234)); // to acceptable number
    CHECK_THROWS(ariel::snowman(52341234)); // to acceptable number
    CHECK_THROWS(ariel::snowman(02341234)); // to acceptable number


    
    CHECK_THROWS(ariel::snowman(-12341234)); // negative
    CHECK_THROWS(ariel::snowman(-22341234)); // negative
    CHECK_THROWS(ariel::snowman(-32341234)); // negative
    CHECK_THROWS(ariel::snowman(-42341234)); // negative
}
