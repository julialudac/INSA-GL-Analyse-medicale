#include <catch.hpp>
#include <utils/utils.h>
#define MEDANALYSIS_TEST
using Catch::Matchers::Vector::ContainsElementMatcher;



TEST_CASE("List Controller", "[Controller][List]"){
    std::string line = "Line:to::parse:";
    std::vector<std::string> parts = split(line, ':');
    REQUIRE(parts.at(0)=="MA v1.0");
    REQUIRE(parts.at(1)=="DISEASES");
    REQUIRE(parts.at(2)=="Cancer");
    REQUIRE(parts.at(3)=="Yinjingduanxiao");
    REQUIRE(parts.at(4)=="Meipiyan");
    REQUIRE(parts.at(5)=="");
}